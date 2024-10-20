#include<bits/stdc++.h>
using namespace std;

int n;
int a[1005] = {0};
int ans = 0; 

int main(){
//#ifndef ONLINE_JUDGE
//    freopen("data.in","r",stdin);
//    freopen("data.out","w",stdout);
//#endif

	cin >> n;
	for(int i = 0;i < n;i ++) cin >> a[i];
	for(int i = 0;i < n;i ++){
		for(int j = i + 1;j < n;j ++){
			if(a[j] < a[i]) ans ++;
		}
	}
	cout << ans << endl;

	return 0;
}

