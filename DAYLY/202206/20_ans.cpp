#include <iostream>
#include <set>
#include <vector>
using namespace std;

#define rep(n) for (int i = 0; i < n; i++)

int main() {
    int N;cin >> N;
    set<vector<int>> st;
    rep(N) {
        int L;cin >> L;
        vector<int> v(L);
        for (auto& x : v) {
            cin >> x;
        }
        st.insert(v);

    }
    cout << st.size() << "\n";
}