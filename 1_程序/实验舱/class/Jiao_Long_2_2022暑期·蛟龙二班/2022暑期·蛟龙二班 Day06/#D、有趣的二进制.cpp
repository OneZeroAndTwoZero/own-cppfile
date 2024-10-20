#include<bits/stdc++.h>
using namespace std;

int toten(long long a){
	int s = 0;
	int quan = 1;
	while(a){
		s += (a % 10) * quan;
		quan *= 2;
		a /= 10; 
	}
	return s;
}

int main(){
	int n;
	cin >> n;
	long long a;
	for(int i = 1;i <= n;i++){
		cin >> a;
		cout << toten(a) << endl;
	}
	
	return 0;
} 
