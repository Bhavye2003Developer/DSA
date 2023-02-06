// #include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int x; cin >> x;
    int reverse = 0,digit;
    
    while (x!=0){
        digit = x%10;
        if (reverse>INT_MAX/10 || reverse<INT_MIN/10) break;
        reverse = reverse*10 + digit;
        x/=10;
    }
    cout << reverse << "\n";
    return 0;
}