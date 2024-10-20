#include<bits/stdc++.h>
using namespace std;

bool a[205] = {0};

int main(){
	int l,r;
	cin >> l >> r;
	for(int i = 0;i < 100;i++){
		for(int j = i;j < 100;j++){
			int t = j * j -i * i;
			if(t >= -100 && t <= 100){
				a[t + 100] ++;
			}
		}
	}
	if(l >= -100 && r <= 100){
		int ans = 0;
		for(int i = l;i <= r;i++){
			if(a[i + 100]) ans ++;
		}
		cout << ans << endl;
	}

	return 0;
}

