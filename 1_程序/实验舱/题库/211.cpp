#include<bits/stdc++.h>
using namespace std;

int a[10005] = {0};

bool cmp(int a,int b){
	return a > b;
}

int main(){
	int n,k;
	cin >> n >> k;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a + n,cmp);
	for(int i = 0;i < k;i++){
		int tem;
		cin >> tem;
		cout << a[tem - 1] << endl;
	}

	return 0;
}

