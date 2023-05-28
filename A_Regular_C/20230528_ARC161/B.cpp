// ARC161 - B
// REALTIME
// rnd
// SHOULD?


// -----     cpp_snippets_v8.6     -----
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

#define ll                      long long int
#define rep(i,n)                for (ll i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define vpii(X)                 vector<pair<int, int>> X

#define coutds(N,X)             cout << fixed << setprecision(N) << X << endl
#define chmax(X1, X2)           X1 = max<int>(X1, X2)
#define chmin(X1, X2)           X1 = min<int>(X1, X2)
#define nextP(X)                next_permutation(X.begin(), X.end())

#define INF                     8e18



using namespace std;
using namespace atcoder;

ll binToUInt(const std::string &str);
std::string to_binString(ll val);


int main() {
    int T; cin >> T;

    rep(i,T) {
        ll temp; cin >> temp;
        string temps = to_binString(temp);
        ll one_count = 0;
        rep(j,temps.length()) {
            char tempc = temps[j];
            if(tempc == '1') one_count++;
        }
        if(one_count > 3) {
            vector<char> tempvec(temps.length());
            for(ll j = temps.length()-1; j >= 0; j--) {
                char tempc2 = temps[j];
                if(tempc2 == '1' && one_count > 3) {
                    tempvec[j] = '0';
                    one_count--;
                } else {
                    tempvec[j] = tempc2;
                }
            }
            string temps2 = "";
            rep(j, temps.length()) temps2 += tempvec[j];
            cout << binToUInt(temps2) << endl;
        } else if(one_count < 3) {
            if(temps.length() < 4) {
                cout << -1 << endl;
            } else {
                while(one_count < 3) {
                    one_count = 0;
                    temps = to_binString(--temp);
                    rep(j,temps.length()) {
                        char tempc = temps[j];
                        if(tempc == '1') one_count++;
                    }
                }
                


            vector<char> tempvec(temps.length());
            for(ll j = temps.length()-1; j >= 0; j--) {
                char tempc2 = temps[j];
                if(tempc2 == '1' && one_count > 3) {
                    tempvec[j] = '0';
                    one_count--;
                } else {
                    tempvec[j] = tempc2;
                }
            }
            string temps2 = "";
            rep(j, temps.length()) temps2 += tempvec[j];
            cout << binToUInt(temps2) << endl;

                
            }
        } else {
            cout << temp << endl;
        }
    }
    
    
    
    return 0;
    
}


// "1010" のような２進数文字列を整数値に変換
ll binToUInt(const std::string &str)
{
    ll val = 0;
    for(ll i = 0; i < (int)str.size(); ++i) {
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


// 数値を２進数文字列に変換
std::string to_binString(ll val)
{
    if( !val )
        return std::string("0");
    std::string str;
    while( val != 0 ) {
        if( (val & 1) == 0 )  // val は偶数か？
            str.insert(str.begin(), '0');  //  偶数の場合
        else
            str.insert(str.begin(), '1');  //  奇数の場合
        val >>= 1;
    }
    return str;
}