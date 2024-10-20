#include<bits/stdc++.h>
using namespace std;

int n;
int a[100005];

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	int ming;
	cin >> ming;
	int pm = 1;
	for(int i = 0;i < n;i++){
		if(a[i] > ming){
			pm += 1;
		}
	}
	cout << pm << endl;
	
	return 0;
} 
