#include<bits/stdc++.h>
using namespace std;

bool out(int n,int m){
	bool a[n] = {0};
	int now_m = n;
	int now_b = 0;
	int now_s = 1;
	while(now_m > 1){
		if(now_s == 0){
			a[now_b] = 1;
			now_b = (now_b + 1) % n;
			while(a[now_b]){
				now_b = (now_b + 1) % n;
			}
			now_m --;
		}else{
			now_b = (now_b + 1) % n;
			while(a[now_b]){
				now_b = (now_b + 1) % n;
			}
		}
		now_s = (now_s + 1) % m;
		//cout << now_b << endl;
	}
	for(int i = 0;i < n;i++){
		//cout << a[i] << endl;
		if(!(a[i])){
			cout << i+1 << endl;
		}
	}
}

int main(){
	int n,m;
	cin >> n >> m;
	out(n,m);
	
	return 0;
} 
