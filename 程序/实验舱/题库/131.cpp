#include<bits/stdc++.h>
using namespace std;

int a[1005] = {0};
int c = 0;

bool erf(int x,int n){
	int f = 0,l = n - 1;
	while(f <= l){
		int mid = (f + l) / 2;
		c ++;
		if(a[mid] == x){
			return 1;
		}
		if(a[mid] < x){
			f = mid + 1;
		}else{
			l = mid - 1;
		}
	}
	return 0;
}

int main(){
	int n,x;
	cin >> n >> x;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a + n);
	bool ok = erf(x,n);
	cout << c << endl;
	if(ok){
		cout << 1 << endl;
	}else{
		cout << -1 << endl;
	}

	return 0;
}

