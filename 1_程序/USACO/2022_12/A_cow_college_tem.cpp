#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};

long long qu(int n,int k){
	long long ans = 0;
	for(int i = 0;i < n;i++){
		if(k <= a[i]) ans += k;
	}
	return ans;
}

int main(){
	long long max = -1;
	int max_n;
	int max_tem = -1;;
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		if(a[i] > max_tem) max_tem = a[i];
	}
	for(int i = 0;i <= max_tem;i++){
		long long  nq = qu(n,i);
		if(nq > max){
			max = nq;
			max_n = i;
		}
	}
	cout << max << " " << max_n << endl;

	return 0;
}

