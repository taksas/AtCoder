// ABC301 - A
// DIFF
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



#include <atcoder/all>



#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define vvllll(X,n1,n2)         vector<vector<long long int>> X(n1,vector<long long int>(n2))

#define vpii(X)                 vector<pair<int, int>> X
#

#define coutd(X)                cout << X << endl
#define coutds(N,X)             cout << fixed << setprecision(N) << X << endl
#define chmax(X1, X2)           X1 = max(X1, X2)
#define chmin(X1, X2)           X1 = min(X1, X2)
#define nextP(X)                next_permutation(X.begin(), X.end())

#define INF                     8e18
#define ll                      long long int


using namespace std;
using namespace atcoder;


int comp_D(string str1, string str2);
string get_2(int N);
unsigned int binToUInt(const std::string &str); // USED


int main() {
    string S; cin >> S;
    ll N; cin >> N;

    string Stemp1 = "";
    rep(i,S.length()) {
        char temp = S[i];
        if(temp == '?') temp = '1';
        Stemp1 += temp;
    }
    ll Sn = binToUInt(Stemp1);
    if(Sn < N+1) N = Sn+1;

    while(N){
        string target = get_2(N);
        string stemp = "";
        rep(i,S.length()-target.length()) stemp += "0";
        target = stemp + target;
        if(comp_D(S,target)) {
            cout << N << endl;
            return 0;
        }
        N--;
    }


    
    cout << -1 << endl;
    return 0;
    
}


int comp_D(string str1, string str2) {
    int str1l = str1.length();

    rep(i,str1l) {
        char temp1 = str1[i], temp2 = str2[i];
        if(temp1 == temp2 || temp1 == '?') continue;
        return 0;
    }
    return 1;
}


string get_2(int N) {
    string str;
    while( N != 0 ) {
        if(N % 2  == 0 ) 
            str.insert(str.begin(), '0');
        else
            str.insert(str.begin(), '1');
        N >>= 1;
    }
    return str;
}




unsigned int binToUInt(const std::string &str)
{
    unsigned int val = 0;
    for(int i = 0; i < (int)str.size(); ++i) {
        switch (str[i]) {
        case '0':
            val *= 2;
            break;
        case '1':
            val = val * 2 + 1;
            break;
        }
    }
    return val;
}