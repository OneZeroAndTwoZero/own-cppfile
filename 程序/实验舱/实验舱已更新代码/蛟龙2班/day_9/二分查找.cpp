#include<bits/stdc++.h>
using namespace std;

int zhao(int a[],int k,int n){
	for(int i = n - 1;i >= 0;i--){
		if(a[i] <= k){
			return a[i];
		}
	}
	return -1;
}

int main(){
	int n,t;
	cin >> n >> t;
	int in[n],wen[t];
	for(int i = 0;i < n;i++){
		cin >> in[i];
	}
	sort(in,in+n);
	for(int i = 0;i < t;i++){
		cin >> wen[i];
		cout << zhao(in,wen[i],n) << " ";
	}
	

	return 0;
}

