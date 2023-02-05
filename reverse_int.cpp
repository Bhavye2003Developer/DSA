#include <iostream>
using namespace std;
int main() {
    int x; cin >> x;
    int reverse = 0;
    if (x>0){
        while (x!=0){
            reverse = reverse*10 + x%10;
            x/=10;
        }
    }
    else{    
        x = -x;
        while (x!=0){
            reverse = reverse*10 + x%10;
            x/=10;
        }
        reverse = -reverse;  
    }
    cout << reverse << "\n";
    return 0;
}