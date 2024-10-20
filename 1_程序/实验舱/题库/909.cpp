#include<bits/stdc++.h>
using namespace std;

int a[1005] = {0};

bool cmp(int a,int b){
	return a > b;
}

int main(){
	int v,n;
	cin >> v >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a + n,cmp);
	for(int i = 0;i < n;i++){
		if((v - a[i]) >= 0){
			v -= a[i];
		}else{
			i ++;
		}
	}
	cout << v << endl;

	return 0;
}

