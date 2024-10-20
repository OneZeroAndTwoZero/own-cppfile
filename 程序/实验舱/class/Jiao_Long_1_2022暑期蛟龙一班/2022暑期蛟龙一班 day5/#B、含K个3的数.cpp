#include<bits/stdc++.h>
using namespace std;
int m,k,num = 0;
bool flag_1 = 0,flag_2 = 0;

int main(){
    cin >> m >> k;
    if(m % 19 == 0){
    	flag_1 = 1;
	}
	while(m){
		int a = m % 10;
		if(a == 3){
			num += 1;
		}
		m /= 10;
	}
	if(num == k){
		flag_2 = 1;
	}
	if(flag_1 && flag_2){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	
	return 0;
}
