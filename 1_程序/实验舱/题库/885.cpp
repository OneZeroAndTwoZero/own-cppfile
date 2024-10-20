#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};

bool cmp(int a,int b){
	return a > b;
}

int main(){
	int n;
	long long m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a + n,cmp);
	int ans = 0;
	long long now = 0;
	for(int i = 0;i < n;i++){
		now += a[i];
		ans ++;
		if(now >= m){
			break;
		}
	}
	cout << ans << endl;

	return 0;
}

