#include<bits/stdc++.h>
using namespace std;

int n;
int a[1000005] = {0};

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a + n);
	cout << a[n >> 1] << endl;

	return 0;
}

