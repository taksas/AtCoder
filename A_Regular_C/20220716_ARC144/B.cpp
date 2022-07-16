// ARC144 - B
// REALTIME
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
    multiset<int> mltset;
    int N, a, b; cin >> N >> a >> b;
    rep(i,N) {
        int temp; cin >> temp;
        mltset.insert(temp);
    }

    auto&& tempb = mltset.begin();
    int maximize = *tempb;
    while(1) {
        auto&& tempb = mltset.begin();
        auto&& tempe = mltset.end();
        mltset.insert(*tempb + a);
        mltset.insert(*(--tempe) - b);
        mltset.erase(tempb);
        mltset.erase(tempe);
        tempb = mltset.begin();
        if(max(maximize, *tempb) == maximize) {
            break;
        } else {
            maximize = *tempb;
        }
    }
    coutd(maximize);
    
    
    return 0;
    
}