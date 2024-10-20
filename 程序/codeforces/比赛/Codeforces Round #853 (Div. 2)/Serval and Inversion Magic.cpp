#include<bits/stdc++.h>
using namespace std;

int t,n,cnt;
string s;
bool ok[200005] = {0};

void cz(){
	int l = 0,r = n - 1;
	while(l <= r){
		if(s[l] == s[r]){
			ok[l] = ok[r] = 0;
		}else{
			ok[r] = 0,ok[l] = 1;
		}
		l ++,r --;
	}
}

int main(){
	cin >> t;
	while(t --){
		cin >> n;
		cin >> s;
		cz();
		cnt = 0;
		for(int i = 1;i < n;i++){
			if(ok[i] == 0 && ok[i - 1] == 1) cnt ++;
		}
		if(cnt < 2){
			cout << "Yes\n";
		}else{
			cout << "No\n";
		}
	}

	return 0;
}

