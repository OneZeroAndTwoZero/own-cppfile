#include<bits/stdc++.h>
using namespace std;

int n;
int a[100005],b[101] = {0};

int main(){
	cin >> n;
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
