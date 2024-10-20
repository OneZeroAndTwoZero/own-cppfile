#include<bits/stdc++.h>
using namespace std;

int n,x;
int a[100005];

int main(){
	cin >> n >> x;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	int first = -1,sum = 0;
	for(int j = 0;j < n;j++){
		if(a[j] == x && first == -1){
			first = j + 1;
		}
		if(a[j] == x){
		sum += 1;
	    }
	}
	cout << first << " " << sum << endl;
	
	return 0;
} 
