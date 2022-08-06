// ABC188 - C
// ASAKATSU
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


// -----     cpp_snippets_v6     -----
#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define vpii(X)                 vector<pair<int, int>> X

#define bgen(X)                 begin(X), end(X)
#define coutd(X)                cout << X << endl
#define chmax(X1, X2)           X1 = max(X1, X2)
#define chmin(X1, X2)           X1 = min(X1, X2)

#define dcoutd(X)               if(DEBUGGING) cout << X << endl
#define ddefined(X)             if(DEBUGGING) { X }

#define INF                     1e18
#define ll                      long long int


#define DEBUGGING 1

using namespace std;

int main() {
    int N; cin >> N;
    int an = 1;
    rep(i,N) an *= 2;
    vector<int> A;
    map<int,int> mp;
    rep(i,an) {
        int temp; cin >> temp;
        A.push_back(temp);
        mp[temp] = i+1;
    }
    if(N == 1) {
        coutd(mp[min(A[0],A[1])]);
        return 0;
    }
    coutd(size(A));
    rep(i, N-1) {
        for(int j = 1; j <= size(A)/2; j++) {

            chmax(A[2*j-2],A[2*j-1]);

            //cout << "["<< 2*j-2<< "]["<< 2*j-1 << "]"<<A[2*j-2] << " ";
        }
        for(int j = 1; j <= size(A)/2; j++) {
            A.erase(A.begin() + 2*j - 1);
        }
    }
    //cout << endl;
    coutd(min(A[0],A[1]));
    coutd(mp[min(A[0],A[1])]);
    
    return 0;
    
}