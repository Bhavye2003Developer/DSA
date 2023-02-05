#include<iostream>
using namespace std;

int main(){
	
	int a = 5,b = 7;
	
	cout << "AND -> " << (a&b) << "\n";
	cout << "OR -> " << (a|b) << "\n";
	cout << "XOR -> " << (a^b) << "\n";
	cout << "NOT OF A -> " << (~a) << "\n\n";
	
	cout << "LEFT SHIFT OF A -> " << (a<<1) << "\n";
	cout << "RIGHT SHIFT OF A -> " << (a>>1) << "\n";
	
	return 0;
}