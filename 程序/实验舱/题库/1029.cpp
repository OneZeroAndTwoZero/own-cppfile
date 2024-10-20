#include<bits/stdc++.h>
using namespace std;

int a[1000005] = {0},b[1000005] = {0};

int main(){
	int num1,num2;
	cin >> num1 >> num2;
	for(int i = 0;i < num1;i++){
		cin >> a[i];
	}
	for(int i = 0;i < num2;i++){
		cin >> b[i];
	}
	int k1 = 0,k2 = 0;
	while(k1 + k2 < num1 + num2){
		if(k1 >= num1){
			cout << b[k2 ++] << endl;
		}else if(k2 >= num2){
			cout << a[k1 ++] <<endl;
		}else if(a[k1] > b[k2]){
			cout << b[k2 ++] <<endl;
		}else{
			cout << a[k1 ++] << endl;
		}
	}

	return 0;
}

