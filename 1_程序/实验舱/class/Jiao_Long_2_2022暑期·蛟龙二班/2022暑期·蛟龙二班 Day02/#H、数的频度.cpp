#include<bits/stdc++.h>
using namespace std;

int n;
int a[100005];
int b[1000001] = {};

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		b[a[i]]++;
	}
	int max = b[0],min = b[0];
	for(int i = 0;i < 1000001;i++){
		if(b[i] > max){
			max = b[i];
		}
		if(b[i] < min){
			min = b[i];
		}
	}
	int c = max - min;
	cout << c << endl;
	
	return 0;
}  
