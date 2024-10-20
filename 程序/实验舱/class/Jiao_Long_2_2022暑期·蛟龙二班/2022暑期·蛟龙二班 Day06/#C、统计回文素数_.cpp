#include<bits/stdc++.h>
using namespace std;

bool huiwen(int a){
	int s = 0;
	int n = a;
	while(n){
		int w = n % 10;
		n /= 10;
		s = s * 10 + w;
	}
	if(s == a){
		return 1;
    }else{
    	return 0;
	}
}

bool zhishu(int a){
	if(a == 2) return 1;
	if(a < 2 || !(a & 1)) return 0;
	for(int i = 2;i <= sqrt(a);i++){
		if(a % i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n;
	cin >> n;
	int x,y;
	for(int i = 1;i <= n;i++){
		cin >> x >> y;
		int sum = 0;
		for(int  j= x;j <= y;j++){
			if(huiwen(j) && zhishu(j)){
				sum ++;
			}
		}
		cout << sum << endl;
	}
	
	return 0;
} 
