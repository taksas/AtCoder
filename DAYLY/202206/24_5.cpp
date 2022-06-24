// tokiomarine2020 - B

#include <iostream>
#include <cstdlib> 

using namespace std;

int main() {
    int A, V ,B, W, T; cin >> A >> V >> B >> W >> T;
    long int E = abs(A - B);
    


    int S;
    if ( V > W ) {
        S = V - W;
    } else {
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 0; i < T; i++) {
        E -= S;
        if ( E <= 0 ) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
    
}