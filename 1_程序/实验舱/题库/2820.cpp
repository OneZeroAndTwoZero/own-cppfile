#include<bits/stdc++.h>
using namespace std;

int ok[100] = {0};
int now[100] = {0};

int main(){
	int t1 = 0,t2 = 0;
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		int cd,xs;
		cin >> cd >> xs;
		while(cd --){
			ok[t1 ++] = xs;
		}
	}
	for(int i = 0;i < m;i++){
		int cd,xs;
		cin >> cd >> xs;
		while(cd --){
			now[t2 ++] = xs;
		}
	}
	int ma = -1;
	for(int i = 0;i < 100;i++){
		ma = max(now[i] - ok[i],ma);
	}
	ma = max(ma,0);
	cout << ma << endl;

	return 0;
}

