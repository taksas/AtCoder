// code-festival-2016-qualc - A

#include <iostream>

using namespace std;

#define rp(n) for(int rp123 = 0; rp123 < n; rp123++)

int main() {
    int r = 0;
    string str; cin >> str;
    rp((int)str.size()) {
        
        char temp = str[rp123];
        if(temp == 'C') {
            for(int i = rp123; i < (int)str.size(); i++) {
                temp = str[i];
                if(temp == 'F') {
                    r = 1;
                }
            }
        }
    }
    if(r) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

}