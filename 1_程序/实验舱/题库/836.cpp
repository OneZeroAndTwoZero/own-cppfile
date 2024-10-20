#include<bits/stdc++.h>
using namespace std;

int ws(long long a){
	if(a == 0) return 1;
	int ans = 0;
	while(a){
		ans ++;
		a /= 10;
	}
	return ans;
}

long long he(int w,long long a){
	long long ans = 0;
	for(int i = 0;i < w;i++){
		int mo = pow(10,i + 1),chu = pow(10,i);
		ans += pow((a % mo / chu),w);
	}
	return ans;
}

int main(){
	long long n;
	cin >> n;
	long long check = he(ws(n),n);
	if(check == n){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}

	return 0;
}

