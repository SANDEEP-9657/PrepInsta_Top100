// 6 . Hexadecimal to Decimal conversion 

#include<bits/stdc++.h>
using namespace std;


#include <bits/stdc++.h>
using namespace std;

int hex_dec(string hex) {
    int dec = 0;
    int base = 1; // 16^0

    // Start from rightmost digit
    for (int i = hex.length() - 1; i >= 0; i--) {
        char ch = toupper(hex[i]);

        if (ch >= '0' && ch <= '9') {
            dec += (ch - '0') * base;
        }
        else if (ch >= 'A' && ch <= 'F') {
            dec += (ch - 'A' + 10) * base;
        }
        else {
            cout << "Invalid Hexadecimal digit: " << ch << endl;
            return -1;
        }
        base *= 16;
    }
    return dec;
}

int main() {
    string hex;
    cout << "Enter the hexadecimal number: ";
    cin >> hex;
    int result = hex_dec(hex);
    if (result != -1)
        cout << "The equivalent Decimal number is: " << result << endl;
    return 0;
}
