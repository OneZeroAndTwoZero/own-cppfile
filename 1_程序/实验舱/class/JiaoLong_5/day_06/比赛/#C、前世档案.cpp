#include<bits/stdc++.h>
using namespace std;

int n,m;
string s;
long long ans = 0;

int main(){
	cin >> n >> m;
	while(m--){
		ans = 0;
		cin >> s;
		for(int i = n - 1;i >= 0;i--){
			if(s[n - 1 - i] == 'n'){
				ans += pow(2,i);
			}
		}
		cout << ans + 1 << endl;
	}

	return 0;
}

