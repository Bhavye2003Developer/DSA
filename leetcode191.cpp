#include<iostream>
using namespace std;

int main(){
	
	int n,cntOneDigits = 0; cin >> n;
        while (n!=0){
            if (n&1) cntOneDigits++;
            n = n>>1;
    }    
    cout << cntOneDigits << "\n";
	return 0;
}