// ARC110 - B
// 21%
// 1st
// LEAVE

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

#define vvii(X,n1,n2)            vector<vector<int>> X(n1,vector<int>(n2))
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

#define vpcs(X)                 vector<pair<char, string>> X
#define vint(X)                 vector<int> X

using namespace std;

int main() {
    int N; cin >> N;
    string S; cin >> S;
    string A;
    int length;
    if (N%3) length = N/3+2;
    else length = N/3;
    rep(i,length) A += "110";

    long long int found = 0;
    rep(i,(length)*3-N) {
        int temp = 0;
        rep(j,N) {
            char s = A[i+j];
            char a = S[j];
            if(s == a) continue;
            temp++;
            break;
            coutd(s << "!"<< a);
        }
        if(!temp) {
            found = i+1+N;
            break;
        }
    }
    coutd(found << "!" << (length));
    coutd((10000000000/(found)));
    
    return 0;
    
}