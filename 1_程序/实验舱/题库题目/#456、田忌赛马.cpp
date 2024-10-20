#include<bits/stdc++.h>
using namespace std;

int n,ans = 0,max_,maxi;
int a[10005],b[10005];
bool vis[10005];

bool cmp(int a,int b){
	return a > b;
}

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> b[i];
	}
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(b,b + n,cmp);
	for(int i = 0;i < n;i++){
		max_ = 100000000,maxi = -1;
		for(int j = 0;j < n;j++){
			if(!vis[j] && a[j] > b[i]){
				if(a[j] < max_){
					cout << max_ << "[][]" << j << " " << a[j] << endl;
					max_ = a[j];
					maxi = j;
				}
			}
		}
		if(maxi == -1){
			for(int j = 0;j < n;j++){
				if(!vis[j] && a[j] == b[i]){
					vis[j] = 1;
					cout << i << " " << j << ";;;\n";
					ans ++;
					break;
				}
			}
			ans --;
		}else{
			cout << i << " " << maxi << ";;;\n";
			vis[maxi] = 1;
			ans ++;
		}
	}
	cout << ans << endl;

	return 0;
}

