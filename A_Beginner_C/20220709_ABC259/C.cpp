// ABC259 - C
// REALTIME
// 1st
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


#define rep(i,n)                for (int i = 0; i < n; i++)
#define repe(i,n)               for (int i = 0; i <= n; i++)
#define rrep(i,n)               for (int i = n; i > 0; i--)
#define rrepe(i,n)              for (int i = n; i >= 0; i--)
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


using namespace std;

int main() {
    string S, T; cin >> S >> T;
    int r = 1;
    set<char> smp, tmp;
    
    int j = 0, ok = 0;
    rep(i,T.length()) {
        char st = S[j], tt = T[i];
        if(st != tt && j > 1) {
            char sbt1 = S[j-1], sbt2 = S[j-2];
                if(sbt1 == sbt2&&sbt1 == tt) {
                    j--;
                    // coutd(sbt1 << "!" << j);
                } else {
                    r = 0;
                    break;
                }
        } else if (st != tt && j <= 1){
            r = 0;
            break;
        }
        
        j++;
    }

    
    if(r) coutd("Yes");
    else coutd("No");
    
    return 0;
    
}