#include<bits/stdc++.h>
using namespace std;

int a[10005] = {0};

int main(){
	int n,m;
	cin >> m >> n;
	for(int i = 0;i < n;i++){
		int zc = 0;
		bool p = 0;
		for(int i = 0;i < m;i++){
			cin >> a[i];
			zc = max(zc,a[i]);
			if(i != 0){
				if(a[i] < zc && a[i - 1] < a[i] && !p){
					cout << "NO" << endl;
					p = 1;
				}
			}
		}
		if(!p){
			cout << "YES" << endl;
		}
	}

	return 0;
}

