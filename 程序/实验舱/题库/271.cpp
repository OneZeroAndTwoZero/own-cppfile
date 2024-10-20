#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};

int main(){
	int max = -1;
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	for(int i = 0;i < n;i++){
		if(max > a[i]){
			cout << "1 ";
		}else{
			cout << "0 ";
		}
		if(max < a[i]){
			max = a[i];
		}
	}

	return 0;
}

