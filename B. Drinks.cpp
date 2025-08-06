#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        sum += p;
    }
    
    double ans = (double)sum / n;
    cout << fixed << setprecision(12) << ans;
    
    return 0;
}
