#include<bits/stdc++.h>
using namespace std;
int b[1001] = {0};

int zhong(int a[],int n){
	for(int i = 0;i < n;i++){
		cin >> a[i];
		b[a[i]]++;
	}
	int most = 0;
	for(int i = 0;i < 1001;i++){
		if(b[i] > most){
			most = b[i];
		}
	}
	return most;
} 

int main(){
	int n;
	cin >> n;
	int a[n];
	int i = 0;
	int most = zhong(a,n);
	for(i = 0;i < 1001;i++){
		if(b[i] == most){
			cout << i << " " << most << endl;
		}
	}
	
	return 0;
}  
