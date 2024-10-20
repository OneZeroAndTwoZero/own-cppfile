#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	int s[10] = {0};
	for(int i = 0;i < n;i++){
		int x = a[i] / 10;
//		switch(x){
//			case 10 : s[0] += 1;break;
//			case 9 : s[1] += 1;break;
//			case 8 : s[2] += 1;break;
//			case 7 : s[3] += 1;break;
//			case 6 : s[4] += 1;break;
//			case 5 : s[5] += 1;break;
//			case 4 : s[6] += 1;break;
//			case 3 : s[7] += 1;break;
//			case 2 : s[8] += 1;break;
//			default : s[9] += 1;
//		}
        if(x > 0){
        	s[x - 1] += 1;
		}else{
			s[0] += 1;
		}
	}
	for(int i = 9;i >= 0;i--){
		cout << s[i] << endl;
	}
	
	return 0;
}  
