#include<iostream>
using namespace std;

void printFiboSeries(int n){
	int a = 0, b = 1;
	cout << a << " " << b << " ";
	for (int i=0; i<n-2; i++){
		int sum = a+b;
		cout << sum << " ";
		a = b;
		b = sum;
	}
	cout << "\n";
}

bool isPrime(int n){
	for (int i=2; i<n; i++){
		if (n%i==0) return 0;
	}
	return 1;
}


int main(){
	
	int a = 5,b = 7;
	
	cout << "AND -> " << (a&b) << "\n";
	cout << "OR -> " << (a|b) << "\n";
	cout << "XOR -> " << (a^b) << "\n";
	cout << "NOT OF A -> " << (~a) << "\n\n";
	
	cout << "LEFT SHIFT OF A -> " << (a<<1) << "\n";
	cout << "RIGHT SHIFT OF A -> " << (a>>1) << "\n";
	
	// int n; cin >> n;
	// printFiboSeries(n);
	// cout << isPrime(n);
	
	return 0;
}