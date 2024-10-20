#include<bits/stdc++.h>
using namespace std;

int a[5005] = {0};

int main(){
	int n,k;
	cin >> n >> k;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	int cj = a[k - 1];
	int d = 0;
	for(int i = 0;i < n;i++){
		if(a[i] > cj) d++;
	}
	cout << d << endl;

	return 0;
}

