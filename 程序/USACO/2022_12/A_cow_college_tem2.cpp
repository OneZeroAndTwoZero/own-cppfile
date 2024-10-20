#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};

int erf(int n,int k){
	int f = 0,l = n - 1;
	int mid;
	while(f <= l){
		mid = (f + l) / 2;
		if(a[mid] == k){
			break;
		}else if(a[mid] > k){
			f = mid + 1;
		}else{
			l = mid - 1;
		}
	}
	for(int i = max(0,mid - 2);i < min(n,mid + 2);i++){
		if(a[i] < k){
			return i;
		}
	}
	return n;
}

bool cmp(int a,int b){
	return a > b;
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
	sort(a,a + n,cmp);
	for(int i = 0;i <= max_tem;i++){
		long long  nq = i * erf(n,i);
		if(nq > max){
			max = nq;
			max_n = i;
		}
	}
	cout << max << " " << max_n << endl;

	return 0;
}

