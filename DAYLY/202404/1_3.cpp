// AGC013 - A
// 50%
// NOT_YET


// -----     cpp_snippets_v8.13     -----
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

#define vvii(X,n1,n2)           vector<vector<int>> X(n1,vector<int>(n2))

using namespace std;
using namespace atcoder;
using mint0 = modint998244353;
using mint1 = modint1000000007;


int main() {
    int N; cin >> N;
    vector<int> A(N); for(auto& a: A) cin >> a;
    int ans[2] = {1, 1};
    bool plus = true;
    for(int io = 0; io < 2; io++) {
        for(int i = 1; i < N; i++) {
            if(plus ? A[i] < A[i-1] : A[i] > A[i-1]) {
                plus = !plus;
                ans[io]++;
                cout << "!! " << plus << A[i] << A[i-1];
            }
        }
        plus = false;
    }
    
    
    cout << min<int>(ans[0], ans[1]) << endl;
    return 0;
    
}