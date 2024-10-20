#include<bits/stdc++.h>
using namespace std;

int a[105][105] = {0};
int ans[105] = {0};
bool us[105] = {0};
bool us2[105] = {0};

bool ok(int n,int m){
	bool t = 1,t2 = 1;
	int k = 0;
	while(1){
		t = 0,t2 = 0;
		for(int i = 0;i < n;i++){
			k ++;
			if(!us[i]){
				t = 1;
				int ff = 0,tf = 0,ft = 0,tt = 0;
				for(int j = 0;j < m;j ++){
					if(!us2[j]){
						t2 = 1;
						if(a[j][i] == 0 && ans[j] == 0){
							ff ++;
						}else if(a[j][i] == 1 && ans[j] == 0){
							tf ++;
						}else if(a[j][i] == 0 && ans[j] == 1){
							ft ++;
						}else{
							tt ++;
						}
				    }
				}
				if(!t2) return 1;
				if(tf == 0 && ft == 0){
					us[i] = 1;
				    return 1;
				}
				if(ft == 0){
					us[i] = 1;
					for(int k = 0;k < 105;k ++){
						if(a[k][i] == 0) us2[k] = 1;
					}
					break;
				}else if(tf == 0){
					us[i] = 1;
					for(int k = 0;k < 105;k ++){
						if(a[k][i] == 1) us2[k] = 1;
					}
					break;
				}
			}
		}
		if(k > 10000 || !t) return 0;
    }
}

int main(){
	int t;
	cin >> t;
	while(t --){
		bool r = 1;
		int n,m;
		cin >> n >> m;
		map<string,string> check;
		for(int i = 0;i < m;i++){
			for(int j = 0;j < n;j ++){
				a[i][j] = 0;
			}
			ans[i] = 0;
			us[i] = 0,us2[i] = 0;
		}
		for(int i = 0;i < m;i++){
			string s;
			cin >> s;
			for(int j = 0;j < n;j++){
				a[i][j] = s[j] - '0';
			}
			string tem;
			cin >> tem;
			if(check[s] != "" && check[s] != tem){
				r = 0;
				break;
			}else{
				check[s] = tem;
			}
			ans[i] = tem[0] - '0';
		}
		if(!r){
			cout << "LIE" << endl;
			continue;
		}
		if(ok(n,m)){
			cout << "OK" << endl;
		}else{
			cout << "LIE" << endl;
		}
	}

	return 0;
}
