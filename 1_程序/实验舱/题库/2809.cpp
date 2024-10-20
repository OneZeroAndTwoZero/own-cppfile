#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};

bool cmp(int a,int b){
	return a > b;
}

int main(){
	int t;
	cin >> t;
	while(t --){
		int n;
		cin >> n;
		for(int i = 0;i < n;i++){
			cin >> a[i];
		}
		sort(a,a + n,cmp);
		for(int i = 0;i < n;i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}

	return 0;
}

