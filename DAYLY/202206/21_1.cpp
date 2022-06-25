// ABC226 - B
#include <iostream>
#include <vector>
#include <set>

using namespace std;

#define rp(n) for(int irp123 = 0; irp123 < n; irp123++)

int main() {
    set<vector<int>> st;
    int N; cin >> N;
    rp(N) {
        int n2; cin >> n2;
        vector<int> n3(n2);
        for(auto& x : n3) {
            cin >> x;
        }
        st.insert(n3);

        
    }
    cout << st.size() << "\n";
}