// ABC201 - C
// 50%
// 1st
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



int calcP(int, int);
int calc(int, int);

int main() {
    string S; cin >> S;

    int ans = 0;
    map<string, int> mp;
    unordered_set<int> certainly;
    vector<int> maybe;
    rep(i,S.length()) {
        char temp = S[i];
        if(temp == 'o') {
            certainly.insert(i);
            maybe.push_back(i);
        }
        else if(temp == '?') maybe.push_back(i);
    }

    certainly.insert(100);


    if(certainly.size() > 5) {
        cout << 0;
    } else {
        rep(i,maybe.size()) {
            string temp = "";
            temp += '0' + maybe[i];

            rep(j,maybe.size()) {
                temp += '0' + maybe[j];

                rep(k,maybe.size()) {
                    temp += '0' + maybe[k];

                    rep(l,maybe.size()) {
                        temp += '0' + maybe[l];

                        unordered_set<int> certainlytemp = certainly;

                        rep(m,4) {
                            char temp2 = temp[m];
                            int temp3 = temp2 - 48;
                            if(certainlytemp.find(temp3) != certainlytemp.end()) certainlytemp.erase(certainlytemp.find(temp3));
                        }
                        if(certainlytemp.size() == 1 && mp[temp] == 0) {
                            mp[temp]++;
                            ans++;
                        }
                        temp.pop_back();
                    }
                    temp.pop_back();
                }
                temp.pop_back();
            }
            temp.pop_back();
        }
        cout << ans;
    }
    cout << endl;
    return 0;
    
}

