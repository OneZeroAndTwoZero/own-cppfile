#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};

int main(){
	int n,k;
	cin >> n >> k;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a + n);
	int min = 1000000;
	for(int i = 0;i + k - 1 < n;i++){
		int cha = abs(a[i + k - 1] - a[i]);
		if(cha < min){
			min = cha;
		}
	}
	cout << min << endl;

	return 0;
}

