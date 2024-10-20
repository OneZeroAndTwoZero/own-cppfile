#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};

int main(){
	int c,n;
	cin >> c >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	} 
	sort(a,a + n);
	int gs = 0;
	int tog = 0;
	for(int i = 0;i < n;i++){
		tog += a[i];
		if(tog > c) break;
		gs ++;
	}
	cout << gs << endl;

	return 0;
}

