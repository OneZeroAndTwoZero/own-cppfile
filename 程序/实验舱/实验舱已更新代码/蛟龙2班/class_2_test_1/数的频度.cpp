#include<bits/stdc++.h>
using namespace std;

int main(){
	int b[1001] = {0};
	int n;
	cin >> n;
	int a[n];
	for(int i = 0;i < n;i++){
		cin >> a[i];
		b[a[i]]++;
	}
	int max = 0,min = 0x3f3f3f3f;
	for(int i = 0;i < 1001;i++){
		if(b[i] != 0){
			if(b[i] > max){
				max = b[i];
			}
			if(b[i] < min){
				min = b[i];
			}
		}
	}
	int cha = max - min;
	cout << cha;
	
	return 0;
}
