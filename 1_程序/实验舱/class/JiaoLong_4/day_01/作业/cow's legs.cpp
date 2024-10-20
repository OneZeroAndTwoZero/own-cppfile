#include<bits/stdc++.h>
using namespace std;

int z[1000005] = {0},y[1000005] = {0};

int main(){
	string s;
	cin >> s;
	int n = s.size();
	for(int i = 0;i < n;i++){
		if(s[i] == '('){
			z[i] = z[max(0,i - 1)] + 1;
		}else{
			y[i] = y[max(0,i - 1)] + 1;
		}
	}
	int gsz = 0,gsy = 0;
	for(int i = 0;i < n;i++){
		if(z[i] >= 2) gsz ++;
		if(y[i] >= 2) gsy ++;
	}
	long long ans = 0;
	for(int i = 0;i < n;i++){
		if(z[i] >= 2) ans += gsy;
		if(y[i] >= 2) gsy --;
	}
	cout << ans << endl;

	return 0;
}

