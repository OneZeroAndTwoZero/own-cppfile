#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n + 1] = {0};
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for(int i = 1,j = 1;i <= n;i++){
		if(a[j] > i){
			n++;
		}else{
			j++;
		}
	}
	cout << n << endl;
	
	return 0;
} 
