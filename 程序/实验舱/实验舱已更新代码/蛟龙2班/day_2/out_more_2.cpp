#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n],b[101] = {0};
	for(int i = 0;i < n;i++){
		cin >> a[i];
		b[a[i]] += 1;
	}
	for(int i = 0;i < n;i++){
		if(b[a[i]] > 0){
			cout << a[i] << " ";
			b[a[i]] = -1;
		}
	}
	
	return 0;
}  
