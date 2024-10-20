#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	for(int i = 0;i < 100;i++){
		int num = a * 100 + i;
		if(num % b == 0){
			if(i < 10){
				cout << '0' << i << endl;
			}else{
				cout << i << endl;
			}
		}
	}
	
	return 0;
}
