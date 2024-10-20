#include<bits/stdc++.h>
using namespace std;

int n;
int a[100005],b[10001] = {0};

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		b[a[i]] += 1;
	}
	int sl = 0;
	for(int i = 0;i < 10001;i++){
		if(b[i] > 0){
			sl +=1;
		}
	}
	cout << sl << endl;
	for(int i = 10000;i >= 0;i--){
		if(b[i] > 0){
			cout << i << " ";
			b[i] = -1;
		}
	}
	
	return 0;
}  
