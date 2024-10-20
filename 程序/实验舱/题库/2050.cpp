#include<bits/stdc++.h>
using namespace std;

int a[13] = {0};
map<string,int> t;

int main(){
	t["A"] = 1,t["2"] = 2,t["3"] = 3,t["4"] = 4,t["5"] = 5,t["6"] = 6,t["7"] = 7;
	t["8"] = 8,t["9"] = 9,t["10"] = 10,t["J"] = 11,t["Q"] = 12,t["K"] = 13;
	int zd = -1;
	for(int i = 0;i < 13;i++){
		cin >> a[i];
		zd = max(zd,a[i]);
	}
	int n,m;
	cin >> n >> m;
	int ans = zd * m;
	for(int i = 0;i < n;i++){
		char tem;
		cin >> tem;
		if(tem == '1'){
			ans += a[9];
			cin >> tem;
		}else{
			string tt = "";
			tt = tt + tem;
			ans += a[t[tt] - 1];
		}
	}
	cout << ans << endl;

	return 0;
}

