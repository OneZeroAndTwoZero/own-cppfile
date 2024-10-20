#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	if(n == 1){
		int my;
		cin >> my;
		cout << 0 << endl;
		return 0;
	}
	long long ans = 0;
	int qian;
	cin >> qian;
	for(int i = 0;i < n - 1;i++){
		int tem;
		cin >> tem;
		if(tem < qian){
			ans += (qian - tem);
		}else{
			qian = tem;
		}
	}
	cout << ans << endl;

	return 0;
}

