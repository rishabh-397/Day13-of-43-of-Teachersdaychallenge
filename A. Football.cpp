#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    
    int max_zero = 0, current_zero = 0;
    int max_one = 0, current_one = 0;
    
    for (char c : s) {
        if (c == '0') {
            current_zero++;
            current_one = 0;
            max_zero = max(max_zero, current_zero);
        } else {
            current_one++;
            current_zero = 0;
            max_one = max(max_one, current_one);
        }
    }
    
    if (max_zero >= 7 || max_one >= 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}
