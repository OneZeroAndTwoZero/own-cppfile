#include<bits/stdc++.h>
using namespace std;

int a[15] = {0};

void to(int n){
	int k = 0;
	while(n){
		a[k ++] = n % 2;
		n /= 2;
	}
}

int main(){
	int k,n;
	cin >> k >> n; 
    to(n);
    long long ans = 0;
    for(int i = 0;i < 15;i++){
    	ans += pow(k,i) * a[i];
	}
	cout << ans << endl;
    
	return 0;
}

