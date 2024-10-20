#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int ws = 0;
	int now = 0;
	for(int i = 1;;i *= -2){
		now += i;
		ans ++;
		if(n < 0 && n >= now){
			break;
		}else(n > 0 && n <= now){
			break;
		}
	}
	

	return 0;
}

