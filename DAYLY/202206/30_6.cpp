// code-formula-2014-qualb - B

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

#define rep(i,n)      for (int i = 0; i < n; i++)
#define repe(i,n)     for (int i = 0; i <= n; i++)
#define rrep(i,n)     for (int i = n; i > 0; i--)
#define rrepe(i,n)    for (int i = n; i >= 0; i--)
#define vrep(X)       for (auto&& x : X)

#define vpii(X)       vector<pair<int, int>> X
#define vpss(X)       vector<pair<string, string>> X
#define vpcc(X)       vector<pair<char, char>> X
#define vpis(X)       vector<pair<int, string>> X
#define vpic(X)       vector<pair<int, char>> X
#define vpsi(X)       vector<pair<string, int>> X
#define vpsc(X)       vector<pair<string, char>> X
#define vpci(X)       vector<pair<char, int>> X
#define vpcs(X)       vector<pair<char, string>> X
#define vint(X)       vector<int> X
#define vchar(X)      vector<string> X
#define vstring(X)    vector<char> X

#define bgen(X)       begin(X), end(X)
#define coutd(X)      cout << X << endl


using namespace std;

int main() {
    string N; cin >> N;
    int length = N.size();
    
    
    int ret[2] = {0};
    int temp = 0;
    for(int i = length - 1; i >= 0; i--) {
        int temp1 =  int(N[i]-'0');
        ret[temp%2] +=  temp1;
        temp++;
    }
    coutd(ret[1] << " " << ret[0]);
    return 0;
    
}