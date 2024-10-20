#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};

int erf(int k,int n){
	if(n == 0) return a[0];
	int fir = 0,las = n - 1;
	int mid;
	while(fir <= las){
		mid = (fir + las) / 2;
		if(a[mid] == k){
			return a[mid];
		}
		if(a[mid] < k){
			fir = mid + 1;
		}else{
			las = mid - 1;
		}
	}
	if(mid == 0) return a[0];
	if(mid == n - 1) return a[n - 1];
	int zx = 10000;
	for(int i = max(0,mid - 3);i < min(n,mid + 3);i ++){
		zx = min(zx,abs(a[i] - k));
	}
	for(int i = max(0,mid - 3);i < min(n,mid + 3);i ++){
		if(abs(a[i] - k) == zx){
			return a[i];
		}
	}
}

int main(){
	int n,m;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	cin >> m;
	for(int i = 0;i < m;i++){
		int tem;
		cin >> tem;
		cout << erf(tem,n) << endl;
	}

	return 0;
}

