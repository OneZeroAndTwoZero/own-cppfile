#include<bits/stdc++.h>
using namespace std;

int z[1000005] = {0},y[1000005] = {0};

int main(){
	string s;
	cin >> s;
	int n = s.size();
	for(int i = 0;i < n;i++){
		if(s[i] == '('){
			if(i != 0) z[i] = z[i - 1] + 1;
			else z[i] = 1;
			y[i] = 0;
		}else{
			if(i != 0) y[i] = y[i - 1] + 1;
			else y[i] = 1;
			z[i] = 0;
		}
	}
	int h = 0,q = 0;
	for(int i = 0;i < n;i++){
		if(z[i] >= 2) h ++;
		if(y[i] >= 2) q ++;
	}
	long long ans = 0;
	for(int i = 0;i < n;i++){
		if(z[i] >= 2){
			ans += q;
		}
		if(y[i] >= 2){
			q --;
		}
	}
	cout << ans << endl;

	return 0;
}

