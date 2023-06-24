// ABC307 - C
// REALTIME
// rnd
// SHOULD?


// -----     cpp_snippets_v8.10     -----
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

#define MAXINT                  2147483647
#define MININT                  -2147483648
#define MAXLL                   9223372036854775807
#define MINLL                   -9223372036854775808
#define INFI                    (INT_MAX / 2)
#define INFL                    (1LL << 60)
#define ll                      long long int
#define ull                     unsigned long long int

#define rep(i,n)                for (int i = 0; i < n; i++)
#define vrep(X)                 for (auto&& x : X)
#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))
#define coutds(N,X)             cout << fixed << setprecision(N) << X << endl
#define nextP(X)                next_permutation(X.begin(), X.end())

using namespace std;
using namespace atcoder;
using mint = modint998244353;


int main() {
    int Ha, Wa; cin >> Ha >> Wa;
    vector<vector<char>> A(Ha,vector<char>(Wa));
    vector<pair<int,int>> A_sharp_location;
    rep(i,Ha) {
        string temp; cin >> temp;
        rep(j,Wa) {
            A[i][j] = temp[j];
            if(temp[j] == '#') A_sharp_location.push_back({i,j});
        }
    }

    int Hb, Wb; cin >> Hb >> Wb;
    vector<vector<char>> B(Hb,vector<char>(Wb));
    vector<pair<int,int>> B_sharp_location;
    rep(i,Hb) {
        string temp; cin >> temp;
        rep(j,Wb) {
            B[i][j] = temp[j];
            if(temp[j] == '#') B_sharp_location.push_back({i,j});
        }
    }
    
    int Hx, Wx; cin >> Hx >> Wx;
    vector<vector<char>> X(Hx,vector<char>(Wx));
    vector<pair<int,int>> X_sharp_location;
    rep(i,Hx) {
        string temp; cin >> temp;
        rep(j,Wx) {
            X[i][j] = temp[j];
            if(temp[j] == '#') X_sharp_location.push_back({i,j});
        }
    }
    int Asize, Bsize, Xsize;
    Asize = A_sharp_location.size();
    Bsize = B_sharp_location.size();
    Xsize = X_sharp_location.size();

    for(int i = 1; i < Asize; i++) A_sharp_location[i] = {A_sharp_location[i].first-A_sharp_location[0].first, A_sharp_location[i].second-A_sharp_location[0].second};
    for(int i = 1; i < Bsize; i++) B_sharp_location[i] = {B_sharp_location[i].first-B_sharp_location[0].first, B_sharp_location[i].second-B_sharp_location[0].second};
    A_sharp_location[0] = {0,0};
    B_sharp_location[0] = {0,0};

    rep(i,Xsize) {
        set<int> black;


        int Ai = 0;
        for(int in = i; in < Xsize; in++) {
            if(Ai >= Asize) break;
            if((X_sharp_location[in].first - X_sharp_location[i].first) == A_sharp_location[Ai].first && (X_sharp_location[in].second - X_sharp_location[i].second) == A_sharp_location[Ai].second) {
                Ai++;
                black.insert(in);
            }
        }
            
        if(Ai==Asize) {
            





            set<int> black_backup = black;


            rep(i2,Xsize) {
                black = black_backup;
                int Bi = 0;
                for(int in2 = i2; in2 < Xsize; in2++) {
                    if(Bi >= Bsize) break;
                    if((X_sharp_location[in2].first - X_sharp_location[i2].first) == B_sharp_location[Bi].first && (X_sharp_location[in2].second - X_sharp_location[i2].second) == B_sharp_location[Bi].second) {
                        Bi++;
                        black.insert(in2);
                    }
                }
                    
                if(Bi==Bsize && black.size() == Xsize) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }










        }
    }
    cout << "No" << endl;
    return 0;
    
}