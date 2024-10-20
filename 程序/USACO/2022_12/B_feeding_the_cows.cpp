#include<bits/stdc++.h>
using namespace std;

char a[100005];

int cz(int n,string s,int k){
	for(int i = 0;i < n;i++){
		a[i] = '.';
	}
	int ans = 0;
	for(int i = 0;i < n;i++){
		if(s[i] == 'G'){
			int st = i,e = i + 2 * k;
			int l = i;
			for(i = st;i <= e && i < n;i++){
				if(s[i] == 'G'){
					l = i;
				}
			}
			i --;
			ans ++;
			int pos = min(st + k,n - 1);
			a[pos] = 'G';
		}
	}
	for(int i = 0;i < n;i++){
		if(s[i] == 'H'){
			int st = i,e = i + 2 * k;
			int l = i;
			for(i = st;i <= e && i < n;i++){
				if(s[i] == 'H'){
					l = i;
				}
			}
			ans ++;
			int pos = min(st + k,n - 1);
			if(a[pos] == '.'){
				a[pos] = 'H';
			}else{
				for(int j = pos;j >= st - k;j --){
					if(j >= 0 && j < n && abs(st - j) <= k && abs(l - j) <= k){
						if(a[j] == '.'){
							a[j] = 'H';
							break;
						}
					}
				}
			}
			i --;
		}
	}
	return ans;
}

int main(){
	int t;
	cin >> t;
	while(t --){
		int n,k;
		cin >> n >> k;
		string s;
		cin >> s;
		int ans = cz(n,s,k);
		cout << ans << endl;
		for(int i = 0;i < n;i++){
			cout << a[i];
		}
		cout << endl;
	}

	return 0;
}

