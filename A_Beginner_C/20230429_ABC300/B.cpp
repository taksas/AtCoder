// AABC300 - B
// CONTEST
// rnd
// SHOULD?


// -----     cpp_snippets_v8.5     -----
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



#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define vvllll(X,n1,n2)         vector<vector<long long int>> X(n1,vector<long long int>(n2))

#define vpii(X)                 vector<pair<int, int>> X
#

#define coutd(X)                cout << X << endl
#define coutds(N,X)             cout << fixed << setprecision(N) << X << endl
#define chmax(X1, X2)           X1 = max(X1, X2)
#define chmin(X1, X2)           X1 = min(X1, X2)
#define nextP(X)                next_permutation(X.begin(), X.end())

#define INF                     8e18
#define ll                      long long int


using namespace std;
using namespace atcoder;


int main() {
    int H, W; cin >> H >> W;
    vector<vector<char>> map1(H,vector<char>(W));
    vector<vector<char>> map2(H,vector<char>(W));
    int sharp1 = 0, sharp2 = 0, ten1 = 0;
    rep(i,H) rep(j,W) {
        cin >> map1[i][j];
        if(map1[i][j] == '#') sharp1++;
        else ten1++;
    }
    rep(i,H) rep(j,W) {
        cin >> map2[i][j];
        if(map2[i][j] == '#') sharp2++;
    }
    
    if(sharp1 != sharp2) {
        cout << "No" << endl;
        return 0;
    }
    
    int targetnum;
    char target;
    if(ten1 < sharp1) {
        target = '.';
        targetnum = ten1;
    } else {
        target = '#';
        targetnum = sharp1;
    } 
    
    vector<pair<int, int>> genesismap1;
    rep(i,H) rep(j,W) {
        char temp = map1[i][j];
        if(temp == target) genesismap1.push_back({i,j});
    }

    vector<pair<int, int>> genesismap2;
    rep(i,H) rep(j,W) {
        char temp = map2[i][j];
        if(temp == target) genesismap2.push_back({i,j});
    }

    vector<map<pair<int,int>,int>> relatedmap1(targetnum);
    vector<vector<pair<int, int>>> relatedmap1v(targetnum,vector<pair<int, int>>(targetnum));
    rep(i,targetnum) {
        int tartempi = genesismap1[i].first, tartempj = genesismap1[i].second;
        rep(j,targetnum) {
            int tartempi2 = min(abs(tartempi - genesismap1[j].first), min(abs((tartempi + H) - genesismap1[j].first), abs(tartempi - (genesismap1[j].first + H))));
            int tartempj2 = min(abs(tartempj - genesismap1[j].second), min(abs((tartempj + W) - genesismap1[j].second), abs(tartempj - (genesismap1[j].second + W))));
            relatedmap1[i][{tartempi2, tartempj2}]++;
            relatedmap1v[i][j].first = tartempi2;
            relatedmap1v[i][j].second = tartempj2;
        }
    }


    vector<map<pair<int,int>,int>> relatedmap2(targetnum);
    rep(i,targetnum) {
        int tartempi = genesismap2[i].first, tartempj = genesismap2[i].second;
        rep(j,targetnum) {
            int tartempi2 = min(abs(tartempi - genesismap2[j].first), min(abs((tartempi + H) - genesismap2[j].first), abs(tartempi - (genesismap2[j].first + H))));
            int tartempj2 = min(abs(tartempj - genesismap2[j].second), min(abs((tartempj + W) - genesismap2[j].second), abs(tartempj - (genesismap2[j].second + W))));
            relatedmap2[i][{tartempi2, tartempj2}]++;
        }
    }
    
    rep(i,targetnum) {
        int no = 0;
        rep(j, targetnum) {
            if(relatedmap1[i][{relatedmap1v[i][j].first, relatedmap1v[i][j].second}] != relatedmap2[i][{relatedmap1v[i][j].first, relatedmap1v[i][j].second}]) {
                no = 1;
                break;
            }
        }
        if(no == 0) {
            cout << "yes" << endl;
            return 0;
        }
    }

    
    cout << "No" << endl;
    return 0;
    
}