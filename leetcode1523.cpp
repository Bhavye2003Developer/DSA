#include<iostream>
using namespace std;

int main(){
	
	int low, high; cin >> low >> high;
	
	if ((low&1) && (high&1))
		cout << ((high - low) + 2) / 2;
	
	else if (!(low&1) && !(high&1)){
		cout << (high - low) / 2;
	}
	else{
		cout << ((high - low) + 1) / 2;
	}
	return 0;
}