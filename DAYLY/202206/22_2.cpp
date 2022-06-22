// ABC035 - A

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s; cin >> s;
    int len = s.size();
    for (int i = 0; i < len; i++) {
        string temp = s.substr(i, 1);
        if(s.substr(len - i - 1, 1) == "*" || s.substr(len - i - 1, 1) == temp || temp == "*") {
            ;
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}