// ABC214 - C
 
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
    vector<int> S(N);
    vector<int> T(N);
    vector<int> mini(N);
    vrep(S) {
        cin >> x;
    }
    rep(i,N) {
        int temp; cin >> temp;
        T[i] = temp;
        mini[i] = temp;
    }
    for(int i = 1; i < N*2; i++) {
        if(i%N == 0) {
            mini[0] = min(mini[0], mini[N - 1] + S[N - 1] );
        } else {
            mini[i%N] = min(mini[i%N], mini[i%N - 1] + S[i%N - 1] );
        }
        
    }

    rep(i,N) {
        cout << mini[i] << endl;
    }
    
     return 0;
     
 }