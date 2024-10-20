#include<bits/stdc++.h>
using namespace std;

int num(int a,int c){
	if(a < 0) return 0;
	if(a == 1 || a == 0){
		return 1;
	}
	int ans = 0;
	for(int i = c;i >= 1;i--){
		ans += num(a - i,i);
	}
	return ans;
}

int main(){
	int n;
	cin >> n;
	cout << num(n,n) << endl;

	return 0;
}

