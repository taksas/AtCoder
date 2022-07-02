// ABC258 - B
// 1st
// NOT_YET

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <string>

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


int movego(int i, int j, int N, map<int,int> A) {
    int maxaddr = -1, maxint = 0;

    for(int i2 = -1; i2 <= 1; i2++) {
        for(int j2 = -1; j2 <= 1; j2++) {
            

            int i3 = i2, j3 = j2;
            if(i2 == 0 && j2 == 0) i3 = i2 - 1, j3 = j2 - 1;
            if(i == 1 && i2 == -1) {
                i3 = N;
            }
            if(i == N && i2 == 1) {
                i3 = 1;
            }
            if(j == 1 && j2 == -1) {
                j3 = N;
            }
            if(j == N && j2 == 1) {
                j3 = 1;
            }

            if(maxint != max(maxint,A[i3*100+j3])) {
                maxint = A[i3*100+j3]; maxaddr = i3*100+j3;
            }
        }
    }
    return maxaddr;
}

int main() {
    int N; cin >> N;

    vector<pair<int,int>> vmax(N);
    int vmi = 0;

    map<int,int> A;

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            cin >> A[i*100+j];
            if(A[i*100+j] == max(A[i*100+j],vmax[vmi-1].first)) {
                vmax[vmi].first =  A[i*100+j];
                vmax[vmi++].second =  i*100+j;
            }
        }
    }


    int retint = 0;
    while(vmi--) {
        
        int where = vmax[vmi].second;
        int retinttemp = vmax[vmi].first;
        rep(i,3) {
            where = movego(where/100, where-(where/100), N, A);
            coutd(where/100 << "!" << where-(where/100));
            retinttemp += A[where];
        }
        retint = max(retint, retinttemp);
        
    }

    cout << retint << endl;
    return 0;
    
}