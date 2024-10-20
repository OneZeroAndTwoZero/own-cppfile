#include<bits/stdc++.h>
using namespace std;

int a[1005] = {0};

bool cmp(int a,int b){
	return a > b;
}

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a+n,cmp);
	for(int i = 0;i < n;i++){
		cout << a[i] << " ";
		if((i + 1) % m == 0){
			cout << endl;
		}
	}

	return 0;
}

