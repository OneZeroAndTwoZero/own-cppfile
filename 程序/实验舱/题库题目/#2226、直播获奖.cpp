#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};

bool cmp(int a,int b){
	return a > b;
}

int main(){
	int n,w;
	cin >> n >> w;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		sort(a,a + i + 1,cmp);
		int weishu = max(1,((i + 1) * w / 100)) - 1;
		cout << a[weishu] << " ";
	}
	cout << endl;

	return 0;
}

