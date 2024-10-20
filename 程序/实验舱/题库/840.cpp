#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};
int slt[1005] = {0};

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	int k = 0;
	for(k = 0;k < m;k++){
		slt[k] = a[k];
	}
	while(k < n){
		sort(slt,slt + m);
		slt[0] += a[k ++];
	}
	sort(slt,slt + m);
	cout << slt[m - 1] << endl;

	return 0;
}

