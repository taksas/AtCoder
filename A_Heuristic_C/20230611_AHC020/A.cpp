// AHC020 - A
// REALTIME
// rnd
// SHOULD?


// -----     cpp_snippets_v8.9     -----
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_set>
#include <map>
#include <string>
#include <cmath>
#include <ctime>
#include <functional>
#include <stack>
#include <queue>
#include <deque>
#include <tuple>
#include <cassert>
#include <bitset>
#include <iomanip>
#include <sstream>

#include <atcoder/all>

#define MAXINT                  2147483647
#define MININT                  -2147483648
#define MAXLL                   9223372036854775807
#define MINLL                   -9223372036854775808
#define INFI                    (INT_MAX / 2)
#define INFL                    (1LL << 60)
#define ll                      long long int

#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)
#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define coutds(N,X)             cout << fixed << setprecision(N) << X << endl
#define nextP(X)                next_permutation(X.begin(), X.end())

using namespace std;
using namespace atcoder;
using mint = modint998244353;






int main() {
    int N, M, K; cin >> N >> M >> K;
    vector<pair<int, int>> xy(N), xy_distance(N), xy_check_x(N), xy_check_y(N);
    vector<vector<pair<int, ll>>> linkage(N);
    map<pair<int, int>, int> linkage_num, disablation;
    map<pair<int, int>, int> conversionN, passed;
    map<pair<int, int>, vector<int>> conversionM;
    vector<pair<int, int>> ab(K);
    vector<int> ansP(N, 0), ansB(M, 1);
    rep(i,N) {
        cin >> xy[i].first >> xy[i].second;
        conversionN[xy[i]] = i;
    }
    xy_check_x = xy_check_y = xy_distance = xy;
    vrep(xy_check_y) {
        int temp = x.first;
        x.first = x.second;
        x.second = temp;
    }
    sort(xy_distance.begin(), xy_distance.end());
    sort(xy_check_x.begin(), xy_check_x.end());
    sort(xy_check_y.begin(), xy_check_y.end());
    rep(i,M) {
        int t1, t2, t3; cin >> t1 >> t2 >> t3;
        linkage[t1-1].push_back({t2-1, t3}); linkage[t2-1].push_back({t1-1, t3});
        conversionM[xy[t1-1]].push_back(i); conversionM[xy[t2-1]].push_back(i);
    }
    vrep(ab) cin >> x.first >> x.second;
    

    int x_lower = xy_check_x[xy_check_x.size()/10].first, x_upper = xy_check_x[xy_check_x.size()/10*9].first, y_lower = xy_check_y[xy_check_y.size()/10].first, y_upper = xy_check_y[xy_check_y.size()/10*9].first;

    int x_lower1 = xy_check_x[xy_check_x.size()/10*4].first, x_upper1 = xy_check_x[xy_check_x.size()/10*6].first, y_lower1 = xy_check_y[xy_check_y.size()/10*4].first, y_upper1 = xy_check_y[xy_check_y.size()/10*6].first;
    int x_lower2 = xy_check_x[xy_check_x.size()/10*6].first, x_upper2 = xy_check_x[xy_check_x.size()/10*8].first, y_lower2 = xy_check_y[xy_check_y.size()/10*6].first, y_upper2 = xy_check_y[xy_check_y.size()/10*8].first;

    rep(i,N) {
        if(xy[i].first < x_lower || xy[i].first > x_upper || xy[i].second < y_lower || xy[i].second > y_upper) {
            rep(j,conversionM[xy[i]].size()) ansB[conversionM[xy[i]][j]] = 0;
            continue;
        }
        rep(j,N) {
            if(xy[i] == xy_distance[j]) {
                ll euclidean_minus = MINLL, euclidean_plus = MINLL;  
                int EnabledNum = 0;
                if(j > 0) {
                    bool out = false;
                    rep(j2,conversionM[xy_distance[j-1]].size()) if(ansB[conversionM[xy_distance[j-1]][j2]] == 0) {
                        out = true;
                        break;
                    }
                    if(out) break;
                    EnabledNum++;
                    euclidean_minus = sqrt((double)(xy_distance[j].first - xy_distance[j-1].first)*(xy_distance[j].first - xy_distance[j-1].first) + (xy_distance[j].second - xy_distance[j-1].second)*(xy_distance[j].second - xy_distance[j-1].second));
                }
                if(j < N-1) {
                    bool out = false;
                    rep(j2,conversionM[xy_distance[j+1]].size()) if(ansB[conversionM[xy_distance[j+1]][j2]] == 0) {
                        out = true;
                        break;
                    }
                    if(out) break;
                    EnabledNum++;
                    euclidean_minus = sqrt((double)(xy_distance[j].first - xy_distance[j+1].first)*(xy_distance[j].first - xy_distance[j+1].first) + (xy_distance[j].second - xy_distance[j+1].second)*(xy_distance[j].second - xy_distance[j+1].second));
                }
                int target_max = 3000;
                if((xy[i].first > x_lower1 && xy[i].first < x_upper1) || (xy[i].second > y_lower1 && xy[i].second < y_upper1)) target_max = 5000;
                else if((xy[i].first > x_lower2 && xy[i].first < x_upper2) || (xy[i].second > y_lower2 && xy[i].second < y_upper2)) target_max = 4000;
                ansP[i] = min<ll>(target_max, max<ll>(euclidean_minus, euclidean_plus));
            }

        }
    }

    vrep(ansP) cout << x << " "; cout << endl;
    vrep(ansB) cout << x << " "; cout << endl;
    return 0;
    
}