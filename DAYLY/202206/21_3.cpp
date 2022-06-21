// ABC226 - B

#include <iostream>
#include <vector>
#include <set>

using namespace std;

#define rp(n,i) for(int i = 0; i < n; i++)

int main() {
    set<vector<int>> st;
    int N; cin >> N;
    rp(N, i) {
        int L; cin >> L;
        vector<int> a(L);
        for (auto& x : a) {
            cin >> x;
        }
        st.insert(a);
    }
    cout << st.size() << "\n";
}