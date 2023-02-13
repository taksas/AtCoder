// AAA000 - Q
// DIFF
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

int check(int output) {
    cout << output << endl;
    string s; cin >> s;
    if(s == "Male") {
        cout << flush;
        return 0;
    } else if(s == "Female") {
        cout << flush; 
        return 1;
    } else {
        return 2;
    }
}



int main() {
    int N; cin >> N;
    int tarb = 0, tar = N/2, tara = N-1;
    for(int gli = 0; gli < 20; gli++) {





        int chkb = check(tarb), chk = check(tar);
        if(chkb == 2 || chk == 2) return 0;
        if(((tar - tarb)%2 == 0 && chkb != chk) || ((tar - tarb)%2 == 1 && chkb == chk) ) {
            tarb++;
            tara = tar-1;
            tar = tarb + ((tar - tarb)/2);
            continue;
        } else {
            int chka = check(tara);
            if(chka == 2) return 0;
            if(((tara - tar)%2 == 0 && chka != chk) || ((tara - tar)%2 == 1 && chka == chk)) {
                tarb = tar+1;
                tar = tar + ((tara - tar)/2);
                tara--;
                continue;
            } else {
                cout << "NOOOOOOOOOOOOO" << endl;
                return 0;
            }
        }

    }
    return 0;
}