#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0},b[100005] = {0},c[100005] = {0};

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >>a[i];
	}
	for(int i = 0;i < n;i++){
		cin >> b[i];
	}
	for(int i = 0;i < n;i++){
		cin >> c[i];
	}
	sort(a,a + n);
	sort(b,b + n);
	long long ans = 0;
	for(int i = 0;i < n;i++){
		int t1 = lower_bound(a,a + n,&b[i]); 
		int t2 = lower_bound(c,c + n,&b[i]);
		cout <<t1 << "///" <<t2 << endl;
	}

	return 0;
}

