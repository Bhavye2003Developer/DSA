#include<iostream>
using namespace std;

int main(){
	int n,digit,diff; cin >> n;
	int prod = 1, sumDigits = 0;
	while (n>=1){
		digit = n%10;
		sumDigits+=digit;
		prod = prod * digit;
		n/=10;
	}
	diff = prod - sumDigits;
	cout << diff << "\n";
	return 0;
}