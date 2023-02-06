#include<iostream>
#include<math.h>
using namespace std;

void DecimalToBinaryFirst(int n){
	int arr[100], index = 0;
	while (n!=0){
		arr[index] = n%2;
		index++;
		n/=2;
	}
	for (int i=index-1; i>=0; i--){
		cout << arr[i] << " ";
	}
}

void DecimalToBinarySecond(int n){
	int ans = 0,digit,i=0; cin >> n;
	while (n!=0){
		digit = n&1;
		ans = (digit * pow(10,i)) + ans;
		n = (n>>1);
		i++;
	}
	cout << ans << "\n";
}

void twoCompliment(int n){
	int bit, n_bit = 0; cin >> n;
	bool bits[100];
	n+=1;
	n = -n;
	while (n_bit<32){
		bit = (~n&1);
		bits[n_bit] = bit;
		// cout << bit << " ";
		n = n>>1;
		n_bit++;
	}
	for (int i=n_bit-1; i>=0; i--){
		cout << bits[i] << "";
	}
}

void BinaryToDecimal(int n){
	int bit,ans = 0, power = 0; cin >> n;
	while (n!=0){
		bit = n%10;
		if (bit==1){
			ans+=pow(2,power);
		}
		power++;
		n/=10;
	}
	cout << ans << "\n";
}

int main(){
	
	return 0;
}