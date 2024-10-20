#include<bits/stdc++.h>
using namespace std;

string a[100005],ans[100005];

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	string k;
	cin >> k;
	int ks = 0;
	for(int i = 0;i < n;i++){
		if(a[i].find(k,0) != a[i].npos){
			if(a[i].find(k,0) == 0){
				ans[ks ++] = a[i];
			}
		}
	}
	sort(ans,ans + ks);
	for(int i = 0;i < ks;i ++){
		cout << ans[i] <<endl;
	}

	return 0;
}

