#include<iostream>
using namespace std;

int main(){
	
	int n; cin >>n;
	int digit,cnt = 0;
	
	while (n!=0){
		digit = n&1;
		if (digit==1){
			cnt++;
		}
		n = n >> 1;
	}
	
	if (cnt==1) cout << "true\n";
	else{
		cout << "false\n";
	}
	return 0;
}