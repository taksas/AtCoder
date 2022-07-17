// ABC260 - B
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
    int N, X, Y, Z; cin >> N >> X >> Y >> Z;
    vector<int> A(N), B(N);
    vector<pair<pair<int,int>,int>> list, list2;
    vector<pair<int,int>> list3, temp1, temp2, temp3;
    vector<int>  vout;
    vrep(A) cin >> x;
    vrep(B) cin >> x;
    rep(i,N) {
        list.push_back( { {A[i],B[i]}, i+1 } );
    }
    rep(i,N) {
        list2.push_back( { {B[i],A[i]}, i+1 } );
    }
    rep(i,N) {
        list3.push_back( { B[i] + A[i], i+1 } );
    }

    map <int,int> mp;


    sort(bgen(list));
    sort(bgen(list2));
    sort(bgen(list3));



    // X
    int tempx = X, tempx2 = X;
    int check = 0;
    rep(i,X) {
        if(i>=N) break;
        if(N-2-i >= 0) {
            if((list[N-1-i].first.first == list[N-2-i].first.first)) {
                X += 1;
            }
        }
        temp1.push_back( {list[N-1-i].first.first, list[N-1-i].second} );
        mp[list[N-1-i].second]++;
        check++;
    }
    sort(bgen(temp1));

    rep(i,tempx) {
        if(check-2-i >= 0 && temp1[check-1-i].first == temp1[check-2-i].first) {
            tempx++;
            continue;
        }
        vout.push_back(temp1[check-1-i].second);
        mp[temp1[check-1-i].second] = 100;
    }

    

    // Y
    int tempy = Y, tempy2 = Y;
    check = 0;
    rep(i,Y) {
        if(i>=N) break;
        if(mp[list2[N-1-i].second] == 100) {
                Y += 1;
                continue;
            }
        if(N-2-i >= 0) {
            if((list2[N-1-i].first.first == list2[N-2-i].first.first)) {
                Y += 1;
            }
        }
        temp2.push_back( {list2[N-1-i].first.first, list2[N-1-i].second} );
        mp[list2[N-1-i].second]++;
        check++;
    }

    sort(bgen(temp2));

    rep(i,tempy) {
        if(check-2-i >= 0 && temp2[check-1-i].first == temp2[check-2-i].first) {
            tempy++;
            continue;
        }
        vout.push_back(temp2[check-1-i].second);
        mp[temp2[check-1-i].second] = 100;
    }

    
    

    // Z
    int tempz = Z;
    check = 0;
    rep(i,Z) {
        if(i>=N) break;
        if(mp[list3[N-1-i].second] == 100) {
                Z += 1;
                continue;
            }
        if(N-2-i >= 0) {
            if((list3[N-1-i].first == list3[N-2-i].first)) {
                Z += 1;
            }
        }
      //  coutd(list3[N-1-i].first);
      //  coutd(list3[N-1-i].second);
        temp3.push_back( {list3[N-1-i].first, list3[N-1-i].second} );
        mp[list3[N-1-i].second]++;
        check++;
    }

    sort(bgen(temp3));

    rep(i,tempz) {
        if(check-2-i >= 0 && temp3[check-1-i].first == temp3[check-2-i].first) {
            tempz++;
            continue;
        }
        vout.push_back(temp3[check-1-i].second);
    }


    sort(bgen(vout));
    rep(i,vout.size()) {
        coutd(vout[i]);
    }
    
    
    return 0;
    
}