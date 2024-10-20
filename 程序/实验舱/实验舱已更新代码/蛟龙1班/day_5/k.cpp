#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,k;
    cin >> m >> k;
    bool flag_1 = 0;
    bool flag_2 = 0;
    if(m % 19 == 0){
    	flag_1 = 1;
	}
	int num = 0;
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
