// ABC295 - B
// REALTIME
// rnd
// NO

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <ctime>
#include <functional>
#include <stack>
#include <queue>
#include <tuple>
#include <cassert>
#include <bitset>


// -----     cpp_snippets_v2     -----
#define rep(i,n)                for (int i = 0; i < n; i++)
#define repe(i,n)               for (int i = 0; i <= n; i++)
#define rrep(i,n)               for (int i = n; i > 0; i--)
#define rrepe(i,n)              for (int i = n; i >= 0; i--)
#define rep1(i,n)               for (int i = 1; i < n; i++)
#define rep1e(i,n)              for (int i = 1; i <= n; i++)
#define rrep1(i,n)              for (int i = n; i > 1; i--)
#define rrep1e(i,n)             for (int i = n; i >= 1; i--)

#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define vvllll(X,n1,n2)         vector<vector<long long int>> X(n1,vector<long long int>(n2))

#define vpii(X)                 vector<pair<int, int>> X
#define vpss(X)                 vector<pair<string, string>> X
#define vpcc(X)                 vector<pair<char, char>> X
#define vpis(X)                 vector<pair<int, string>> X
#define vpic(X)                 vector<pair<int, char>> X
#define vpsi(X)                 vector<pair<string, int>> X
#define vpsc(X)                 vector<pair<string, char>> X
#define vpci(X)                 vector<pair<char, int>> X
#define vpcs(X)                 vector<pair<char, string>> X
#define vint(X)                 vector<int> X
#define vchar(X)                vector<string> X
#define vstring(X)              vector<char> X

#define bgen(X)                 begin(X), end(X)
#define coutd(X)                cout << X << endl
#define dcoutd(X)               if(DEBUGGING) cout << X << endl


#define DEBUGGING 1

using namespace std;

int main() {
    int R, C; cin >> R >> C;
    int num = 0;
    vector<pair<int,int>> bomb; 
    vector<vector<char>>mp(R,vector<char>(C));
    vector<vector<char>>mpfixed(R,vector<char>(C));
    for(int i = 0; i < R; i++) for(int j = 0; j < C; j++) {
        cin >> mp[i][j];
        mpfixed[i][j] = mp[i][j];
        if(mp[i][j] != '.' && mp[i][j] != '#') {
            bomb.push_back({i,j});
            num++;
        }
    }

    for(int i = 0; i < num; i++) {
        int temp = mp[bomb[i].first][bomb[i].second] - 48;
        int count = -1;
        for(int j = bomb[i].first - temp; j <= bomb[i].first; j++) {
            count++;
            if(j >= R || j < 0) continue;
            int start = bomb[i].second - count, end = bomb[i].second + count;
            for(int k = start; k <= end; k++) {
                if(k >= C || k < 0) continue;
                mpfixed[j][k] = '.';
            }
            
        }
        count = -1;
        for(int j = bomb[i].first + temp; j > bomb[i].first; j--) {
            count++;
            if(j >= R || j < 0) continue;
            int start = bomb[i].second - count, end = bomb[i].second + count;
            for(int k = start; k <= end; k++) {
                if(k >= C || k < 0) continue;
                mpfixed[j][k] = '.';
            }
            
        }
    }
    
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cout << mpfixed[i][j];
        }
        cout << endl;
    }
    
    return 0;
    
}