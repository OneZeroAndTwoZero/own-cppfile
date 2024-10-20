#include<bits/stdc++.h>
using namespace std;

int f_1 = 0,f_2 = 1,f_3,ans1,ans2,n;

int main(){
	cin >> n;
	while(1){
		if(f_1 <= n && f_2 >= n){
			ans1 = f_1;
			ans2 = f_2;
			break;
		}
		f_3 = f_1 + f_2;
		f_1 = f_2;
		f_2 = f_3;
	}
	if(abs(ans1 - n) > abs(ans2 - n)){
		cout << ans2 << endl;
	}else{
		cout << ans1 << endl;
	}
	
	return 0;
}
