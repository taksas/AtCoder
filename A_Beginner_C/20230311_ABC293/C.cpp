// ABC293 - C
// DIFF
// REALTIME
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




int H, W; 


long long int counter = 0;

void calc(int h, int w, string chain, vector<vector<int> >& A) ;


int main() {
    cin >> H >> W;
    static vector<vector<int>>A(H,vector<int>(W));

    for(int i = 0 ; i < H; i++) for(int j = 0; j < W; j++) {
        cin >> A[i][j];
    }
    
    calc(0, 0, "", A);

    cout << counter << endl;
    return 0;
    
}




void calc(int h, int w, string chain, vector<vector<int> >& A) {

    if(h == H-1 && w == W-1) {
        chain += to_string(A[h][w]);
        chain += " ";
        map<string,int> mp;
        for(long long int i = 0; i <= chain.length(); i++) {
            string tempstr = "";
            while(1) {
                char temp = chain[i];
                if(temp == ' ') break;
                else tempstr += temp;
                i++;
            }
            if(mp[tempstr] == 1) return;
            mp[tempstr]++;
        }
        counter++;
    }

    chain += to_string(A[h][w]);
    chain += " ";

    if(h < H-1) calc(h+1, w, chain, A);
    if(w < W-1) calc(h, w+1, chain, A);
    

}