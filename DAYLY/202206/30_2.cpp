// code-formula-2014-quala - B

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

#define bgen(X)       begin(X), end(X)

#define coutd(X)      cout << X << endl;

#define vpii(X)       vector<pair<int, int>> X
#define vpss(X)       vector<pair<string, string>> X
#define vpcc(X)       vector<pair<char, char>> X
#define vpis(X)       vector<pair<int, string>> X
#define vpic(X)       vector<pair<int, char>> X
#define vpsi(X)       vector<pair<string, int>> X
#define vpsc(X)       vector<pair<string, char>> X
#define vpci(X)       vector<pair<char, int>> X
#define vpcs(X)       vector<pair<char, string>> X


using namespace std;

int main() {
    int a, b; cin >> a >> b;
    map<char, char> BOW;
    rep(i,10) {
        BOW[i] = 'x';
    }
    rep(i,a) {
        int temp; cin >> temp;
        BOW[temp] = '.';
    }
    rep(i,b) {
        int temp; cin >> temp;
        BOW[temp] = 'o';
    }
    printf("%c %c %c %c\n", BOW[7],BOW[8],BOW[9],BOW[0]);
    printf(" %c %c %c\n", BOW[4],BOW[5],BOW[6]);
    printf("  %c %c\n", BOW[2],BOW[3]);
    printf("   %c\n", BOW[1]);
    
    
    
    
    return 0;
    
}