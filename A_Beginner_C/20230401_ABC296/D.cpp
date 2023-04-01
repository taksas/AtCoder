// ABC296 - D
// CONTEST
// rnd
// NOT_YET


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







#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define vvllll(X,n1,n2)         vector<vector<long long int>> X(n1,vector<long long int>(n2))

#define vpii(X)                 vector<pair<int, int>> X


#define coutd(X)                cout << X << endl
#define coutds(N,X)             cout << fixed << setprecision(N) << X << endl
#define chmax(X1, X2)           X1 = max(X1, X2)
#define chmin(X1, X2)           X1 = min(X1, X2)
#define nextP(X)                next_permutation(X.begin(), X.end())

#define INF                     8e18
#define ll                      long long int


using namespace std;





long long int calc(long long int, long long int);

int main() {
    long long int N, M; cin >> N >> M;
    long long int ans;
    ans = calc(N, M);
    
    
    cout<< ans << endl;
    
    return 0;
    
}


long long int calc(long long int N, long long int M) {
    long long int start = (long long int)(sqrt(M));
    if(start * start == M) return M;
    long long int mintemp = INF;
    int wait = 0;

    for(long long int i = start+1; i <= N; i++) {
        if(N>=M) return M;

        
        long long int start1 = i*i;
        
        
        if(start1-1 < M && start1 >= M ) mintemp = min(mintemp,start1);
        if(start1-i == M) return M;
        else if(start1-i > M) mintemp = min(mintemp,start1-i);

        long long int j;
        int go = 0;
        long long i2 = i;
        for(j = 1; j < start1; j += 2) {
            if(start1-j - i2 >= M) mintemp = min(mintemp, start1-j - i2);
            if(start1-j < M) {
                go = 1;
                wait++;
                mintemp = min(mintemp, start1-j+2);
                break;
            }
            i2--;
        }
        if(wait == 2) return mintemp;
    }
    if(mintemp == INF) return -1;
    else return mintemp;
}