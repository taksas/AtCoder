// ABC258 - A
// 1st
// YAY!!FAST!!

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
    int K; cin >> K;
    int hour = 21;
    while(1) {
        if(K >= 60) {
            K -= 60;
            hour++;
        } else {
            break;
        }
    }
    if(K < 10) {
        cout << hour << ":0" << K << endl;
    } else {
        cout << hour << ":" << K << endl;
    }
    return 0;
    
}