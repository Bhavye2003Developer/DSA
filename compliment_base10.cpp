// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int res = 0,power = 0, digit;
	while (n!=0){
		digit = (n&1)^1;
		res += pow(2,power)*digit;
		power++;
		n = n >> 1;
	}
	cout << res << "\n";
	return 0;
}