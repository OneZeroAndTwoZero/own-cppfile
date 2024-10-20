#include<bits/stdc++.h>
using namespace std;

int ans[1002];

void cz(string a,string b){
	int len1 = a.size(),len2 = b.size();
	if(len1 < len2 || len1 == len2 && a < b){
		cout << "-";
		swap(a,b);
	}
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	int len = max(len1,len2);
	for(int i = 0;i < a.size();i++){
		ans[i] = a[i] - '0';
	}
	for(int i = 0;i < b.size();i++){
		ans[i] = ans[i] - (b[i] - '0');
	}
	for(int i = 0;i <= len;i++){
		while(ans[i] < 0){
			ans[i] += 10;
			ans[i + 1] --;
		}
	}
	while(!ans[len] && len >= 1){
		len --;
	}
	for(int i = len;i >= 0;i--){
		cout << ans[i];
	}
}

int main(){
	string a,b;
	cin >> a >> b;
	cz(a,b);

	return 0;
}

