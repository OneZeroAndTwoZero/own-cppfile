#include<bits/stdc++.h>
using namespace std;

string s;
int n,now,l,r;
long long ans = 0;

int cz(int n){
	now = n - 1,l = 0,r = 0;
	while(s[now] != s[n] && now >= 0){
		l ++;
		now --;
	}
	now = n + 1;
	while(s[now] != s[n] && now < s.size()){
		r ++;
		now ++;
	}
	if(l + r < 2) return 0;
	if(l == 0) return max(0,r - 1);
	if(r == 0) return max(0,l - 1);
	return max(0,(l * r) + max(0,(r - 1)) + max(0,(l - 1)));
}

int main(){
	cin >> n >> s;
	for(int i = 0;i < s.size();i++){
		ans += cz(i);
	}
    cout << ans << endl;
    
	return 0;
}
