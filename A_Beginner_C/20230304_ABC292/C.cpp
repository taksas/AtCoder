// ABC292 - C
// DIFF
// REALTIME
// NOT_YET

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

map<int,int> mp;
map<int,int> already;

void execmp(int x);
int execb(int x);



int executed = 0;


int main() {
    
    mp[0] = 0;

    int N ; cin >> N;
    long long int res = 0;

    for(int i = 1; i <= N-1; i++) {
        if(i > executed) execmp(i);
        if(N-i > executed) execmp(N-i); 
        


        res += mp[i] * mp[N-i];
    }

    
    cout << res << endl;
    return 0;
    
}


void execmp(int x) {
    for(int i = executed; i <= x; i++) {
        for(int j = executed; j <= x; j++) {
            if(i==j) {
                if(already[i]) continue;
                already[i] = 1;
            }
            mp[i*j]++;
        }
    }
    executed = x;
    //cout << "!" << executed << endl;
}



int execb(int x) {
    int count = 0;
    for(int i = 1; i <=x; i++) {
        for(int j = 1; j <= x; j++) {
            if(i*j==x) count++;
        }
    }
    cout << "!" << count << endl;
    return count;
}