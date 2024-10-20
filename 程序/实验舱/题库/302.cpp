#include<bits/stdc++.h>
using namespace std;

int a[6] = {0};

int zhao(int k){
	int ans = 0;
	for(int i = 0;i < 6;i++){
		if(a[i] == k) ans ++;
	}
	return ans;
}

int main(){
	int yy;
	bool x = 0;
	for(int i = 0;i < 6;i++){
		cin >> a[i];
	}
	for(int i = 0;i < 6;i++){
		int ok = zhao(a[i]);
		if(ok >= 4){
			yy = a[i];
			x = 1;
			break;
		}
	}
	int byy[2] = {0};
	if(!x){
		cout << "Hernia" << endl;
		return 0;
	}
	int tem = 0;
	int tem2 = 0;
	for(int i = 0;i < 6;i++){
		if(a[i] != yy || tem2 >= 4){
			byy[tem ++] = a[i];
		}else{
			tem2 ++;
		}
	}
	if(byy[0] == byy[1]){
		cout << "Elephant" << endl;
	}else{
		cout << "Bear" << endl;
	}

	return 0;
}

