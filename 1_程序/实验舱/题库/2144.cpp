#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t --){
		int n,k;
		cin >> n >> k;
		int max = -1;
		int xf = 0;
		for(int i = 0;i < n;i++){
			int tem;
			cin >> tem;
			if(tem > max){
				max = tem;
				xf ++;
			}
		}
		if(xf > k){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}

	return 0;
}

