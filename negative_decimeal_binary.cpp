#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n;
    cout << "Enter the number = ";
    cin >> n;

    cout << "Decimal = " << n << endl;
    
    string ans = "";
    // Print the 32-bit binary representation
    cout << "Binary (two's complement) = ";
    for (int i = 31; i >= 0; --i) {
        // Extract the i-th bit by right-shifting and masking with 1
        int bit = (n >> i) & 1;
        ans.append(to_string(bit));
    }
    cout << ans<<endl;

    return 0;
}