#include<bits/stdc++.h>
using namespace std;

int shu[100005] = {0},he[100005] = {0},cha[100005] = {0};

int main(){
	int k;
	cin >> k;
	while(k --){
		int n;
		cin >> n;
		for(int i = 0;i < 100005;i++){
			shu[i] = 0,he[i] = 0,cha[i] = 0;
		}
		for(int i = 0;i < n;i++){
			int t;
			cin >> t;
			t --;
			shu[t] ++;
			he[i + t] ++;
			cha[i - t + 1000] ++;
		}
		bool p = 1;
		for(int i = 0;i < 100005;i++){
			if(max({he[i],cha[i],shu[i]}) > 1){
				cout << "NO" << endl;
				p = 0;
				break;
			}
		}
		if(p){
			cout << "YES" << endl;
		}
	}

	return 0;
}

