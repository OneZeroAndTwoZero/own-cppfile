#include<bits/stdc++.h>
using namespace std;

int n,now = 0,h,z,m;

int main(){
	cin >> n;
	for(int i = 1;;i += 1){
		now += i;
		if(now >= n){
			now -= i;
			h = i + 1;
			break;
		}
	}
	now = n - now;
	if(h & 1){
		cout << now << "/" << h - now << endl;
	}else{
		cout << h - now << "/" << now << endl;
	}

	return 0;
}

