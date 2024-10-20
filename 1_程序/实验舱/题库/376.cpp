#include<bits/stdc++.h>
using namespace std;

int a[50005] = {0};

int main(){
	int n,t;
	cin >> n >> t;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a + n);
	int gs = -1;
	int k = 0;
	while(t >= 0){
		t -= a[k ++];
		gs ++;
	}
	cout << gs << endl;

	return 0;
}

