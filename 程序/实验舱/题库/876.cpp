#include<bits/stdc++.h>
using namespace std;

int sz(int i,int j,int n){
	int w = i - 0 + 1;
	int s = n - i;
	int a = j - 0 + 1;
	int d = n - j;
	return min({w,a,s,d});
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cout << sz(i,j,n) <<" ";
		}
		cout <<endl;
	} 

	return 0;
}

