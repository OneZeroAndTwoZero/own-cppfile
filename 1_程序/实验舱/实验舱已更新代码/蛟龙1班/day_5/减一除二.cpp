#include<bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin >> a;
	int num = 0;
	for(int i = 0;i >= 0;i++){
		if(a % 2 == 0){
			a = a / 2;
			num = num + 1;
		}else{
			a = (a - 1) / 2;
			num = num + 1;
		}
		if(a == 1){
			break;
		}
	}
	cout << num << endl;
	
	return 0;
}
