#include<bits/stdc++.h>
using namespace std;
int a,num = 0;
int main(){
	cin >> a;
	while(1){
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
