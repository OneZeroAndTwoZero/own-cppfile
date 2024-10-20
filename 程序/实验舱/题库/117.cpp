#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n],max = -0x3f3f3f3f,max_i = -1;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		if(a[i]>=max){
			max = a[i];
			max_i = i + 1;
		}
	}
	cout << max_i << " " << max << endl;
	
	return 0;
} 
