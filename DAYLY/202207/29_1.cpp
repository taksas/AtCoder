// ABC245 - D
// DIRECT
// rnd
// COPYED_NOT_NEED

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

int main() {
    int N, M; cin >> N >> M;
    vector<int> A(N+1); vrep(A) cin >> x;
    vector<int> B(M+1);
    vector<int> C(N+M+1); vrep(C) cin >> x;

    for (int i = M; i >= 0; i--) {
		B[i] = C[i + N] / A[N];
		for (int j = 0; j <= N; j++)C[i + j] -= B[i] * A[j];
	}


	for (int i = 0; i < M; i++)cout << B[i] << " ";
	cout << B[M] << endl;

    
    
    
    return 0;
    
}