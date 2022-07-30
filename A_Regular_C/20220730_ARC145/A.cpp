// ARC145 - A
// REALTIME
// rnd
// SHOULD?

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


// -----     cpp_snippets_v5     -----
#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define vpii(X)                 vector<pair<int, int>> X

#define bgen(X)                 begin(X), end(X)
#define coutd(X)                cout << X << endl
#define chmax(X1, X2)           X1 = max(X1, X2)

#define dcoutd(X)               if(DEBUGGING) cout << X << endl
#define ddefined(X)             if(DEBUGGING) { X }

#define INF                     1e18
#define ll                      long long int


#define DEBUGGING 1

using namespace std;

int ans = 1;

int main() {
    int N; cin >> N;
    vector<char> S(N); vrep(S) cin >> x;
    for(int i = 0;i <= N/2; i++) {
        if(S[i] == S[(N-1)-i]) {
            continue;
        } else {
            if(i == N/2 && N%2 == 0) {
                coutd("No");
                return 0;
            } else {
                if(S[i] == 'B') {
                    S[i] = 'A';
                    S[i+1] = 'B';
                } else if(N-i < N && S[N-i] == 'B') {
                    S[(N-1)-i] = 'A';
                } else {
                    coutd("No");
                    return 0;
                }
            }
        }
    }
    
    
    if(ans) coutd("Yes");
    return 0;
    
}