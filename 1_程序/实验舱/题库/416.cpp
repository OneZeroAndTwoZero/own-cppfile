#include<bits/stdc++.h>
using namespace std;

int a[1700005] = {0};
int k = 1;

void jia(int n,int x){
	if(n == 0){
		return;
	}
	a[k ++] = 2 * x + 1;
	a[k ++] = 3 * x + 1;
	jia(n - 1,2 * x + 1);
	jia(n - 1,3 * x + 1);
}

int main(){
	jia(14,x);
	sort(a,a + k);
	int x;
	int n;
	while(cin >> a){
		a[0] = x;
	}
	cout << a[--n] << endl;

	return 0;
}

