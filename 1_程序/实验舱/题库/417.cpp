#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	for(int i = 0;i < n;i++){
		if(i % 2 == 0){
			cout << a[i] << " ";
		}else{
			a[n ++] = a[i];
		}
	}
	cout << endl;

	return 0;
}

