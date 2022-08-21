// ABC265 - D
// REALTIME
// rnd
// NOT_YET


// -----     cpp_snippets_v8.3     -----
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
#include <iomanip>
#include <sstream>

#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))

#define coutd(X)                cout << X << endl
#define coutds(N,X)             cout << fixed << setprecision(N) << X << endl
#define chmax(X1, X2)           X1 = max(X1, X2)
#define chmin(X1, X2)           X1 = min(X1, X2)
#define nextP(X)                next_permutation(X.begin(), X.end())

#define INF                     1e18
#define ll                      long long int


using namespace std;

int main() {
    ll N, P, Q, R; cin >> N >> P >> Q >> R;
    vector<ll> A(N); rep(i,N) cin >> A[i];
    vector<vector<int>> mp(N+1,vector<int>(N+1,0));


    int List[4] = {0,1,2,3};
    while(1) {
        if(!(List[0] < List[1] && List[1] < List[2] && List[2] < List[3])) continue;
        //coutd(List[0] << " " << List[1] << " " << List[2] << " " << List[3]);

        if(List[0]+1 == List[1]) {
            mp[List[0]][List[1]] = A[List[0]];
        } else {
            mp[List[0]][List[1]] = mp[List[0]][List[1]-1] + A[List[1]-1];
        }

        if(mp[List[0]][List[1]] != P) {
            if(List[3] < N) {
                List[3]++;
            } else if(List[2] < N-1) {
                List[2]++;
                List[3] = List[2]+1;
            } else if(List[1] < N-2) {
                List[1]++;
                List[3] = List[1]+2;
                List[2] = List[1]+1;
            } else if(List[0] < N-3) {
                List[0]++;
                List[3] = List[2]+3;
                List[2] = List[1]+2;
                List[1] = List[0]+1;
            } else {
                break;
            }
            continue;
        }
        

        if(List[1]+1 == List[2]) {
            mp[List[1]][List[2]] = A[List[1]];
        } else {
            mp[List[1]][List[2]] = mp[List[1]][List[2]-1] + A[List[2]-1];
        }

        if(mp[List[1]][List[2]] != Q) {
            if(List[3] < N) {
                List[3]++;
            } else if(List[2] < N-1) {
                List[2]++;
                List[3] = List[2]+1;
            } else if(List[1] < N-2) {
                List[1]++;
                List[3] = List[1]+2;
                List[2] = List[1]+1;
            } else if(List[0] < N-3) {
                List[0]++;
                List[3] = List[2]+3;
                List[2] = List[1]+2;
                List[1] = List[0]+1;
            } else {
                break;
            }
            continue;
        }


        if(List[2]+1 == List[3]) {
            mp[List[2]][List[3]] = A[List[2]];
        } else {
            mp[List[2]][List[3]] = mp[List[2]][List[3]-1] + A[List[2]-1];
        }

        if(mp[List[2]][List[3]] != R) {
            if(List[3] < N) {
                List[3]++;
            } else if(List[2] < N-1) {
                List[2]++;
                List[3] = List[2]+1;
            } else if(List[1] < N-2) {
                List[1]++;
                List[3] = List[1]+2;
                List[2] = List[1]+1;
            } else if(List[0] < N-3) {
                List[0]++;
                List[3] = List[2]+3;
                List[2] = List[1]+2;
                List[1] = List[0]+1;
            } else {
                break;
            }
            continue;
        }


        coutd("Yes");
        return 0;




        
    }
    
    coutd("No");
    return 0;
    
}