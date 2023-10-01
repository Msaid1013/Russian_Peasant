#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int sum = 0;
    long long int a = 0; long long int b = 0;
    cout << "Enter a: "; cin >> a;
    cout << "Enter b: "; cin >> b;
    
    while (b > 0) {
        if (b & 1) {
            sum += a;
        }
        a <<= 1;
        b >>= 1;
    }
    
    cout << "The product of a and b is: " << sum;

    return 0;
}
