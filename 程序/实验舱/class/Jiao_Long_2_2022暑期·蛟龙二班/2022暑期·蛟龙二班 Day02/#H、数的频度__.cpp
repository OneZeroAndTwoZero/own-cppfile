#include<bits/stdc++.h>
using namespace std;

int a[100005];
int n;
int b[1001] = {};

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		b[a[i]]++;
	}
	int max = b[0],min = 114514;
	for(int i = 0;i < 1001;i++){
		if(b[i] > max){
			max = b[i];
		}
		if(b[i] < min && b[i] > 0){
			min = b[i];
		}
	}
	int c = max - min;
	cout << c << endl;
	
	return 0;
}  
