#include<bits/stdc++.h>
using namespace std;

map<int,int> zhao;

int cheng(int a){
	int ans = 1;
	if(!a) return 0;
	while(a){
		ans *= (a % 10);
		a /= 10;
	}
	return ans;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		int a;
		cin >> a;
		zhao[cheng(a)] ++;
	}
	int ans = 0;
	int max = -1,max_n;
	map<int,int> :: iterator it;
	for(it = zhao.begin();it != zhao.end();it ++){
		ans ++;
		if(it -> second > max){
			max = it -> second;
			max_n = it -> first;
		}
	}
	cout << ans << " " << max_n << endl;

	return 0;
}

