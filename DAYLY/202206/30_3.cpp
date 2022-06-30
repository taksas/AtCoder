// ABC214 - C

// NOT_YET

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
    int N; cin >> N;
    vector<int> R(N);
    vector<int> H(N);
    vector<int> S(N);
    vector<int> T(N);
    vpii(L);
    rep(i,N) {
        R[i] = -1;
    }
    rep(i,N) {
        cin >> S[i];
    }
    rep(i,N) {
        cin >> T[i];
    }




    rep(i,N) {
        int temp2 = T[i];
        int temp3 = 0;
        for(int j = i;j <= N + i; j++) {
            int temp = i + j;
            if(temp3) {
                if(j >= N) {
                    if (j - N == 0) {
                        temp2 += S[N - 1];
                    } else {
                        temp2 += S[j - N - 1];
                    }
                } else {
                    temp2 += S[j - 1];
                }
            }
            
            if(j >= N) {
                L.push_back( { temp2, j - N } );
            } else {
                L.push_back( { temp2 , j } );
            }
            temp3 = 1;
        }

    }

    sort(bgen(L));


    int temp = 0,i = 0;
    while(temp < N) {

        if(L[i].second == temp) {
            R[temp] = L[i].first;
            temp++;
        }




        int exi = 1;
        rep(clock,N) {
            if(R[clock] == -1) {
                exi = 0;
            }
        }
        if(exi) break;
        i++;
    }

    rep(clock,N) {
        cout << R[clock] << endl;
    }

    
    
    
    return 0;
    
}