#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int numbers[n];
	for(int i = 0;i < n;i++){
		cin >> numbers[i];
	}
	int m;
	cin >> m;
	int huan[2*m];
	for(int i = 0;i < 2*m;i ++){
		cin >> huan[i];
	} 
	int temp = 0,huan_1,huan_2;
	for(int i = 0;i < 2*m;i += 2){
		huan_1 = huan[i];
		huan_2 = huan[i+1];
		temp = numbers[huan_1 - 1];
		numbers[huan_1 - 1] = numbers[huan_2 - 1];
		numbers[huan_2 - 1] = temp;
	}
	for(int i = 0;i < n;i++){
		cout << numbers[i] << " ";
	}
	
	return 0;
} 
