#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,k;
	cin >> n >> m >> k;
	for(int i = 0;i < n;i++){
		int max = 0;
		int now = 0;
		for(int j = 0;j < m;j++){
			int tem;
			cin >> tem;
			if(tem == 0){
				if(now > max) max = now;
				now = 0;
			}else{
				now ++;
			}
		}
		if(now > max) max = now;
		if(i + 1 == k) cout << max << endl;
	}

	return 0;
}

