#include<bits/stdc++.h>
using namespace std;

vector<int> zd;

int main(){
	int n;
	cin >> n;
	int k = 0;
	for(int i = 0;i < n;i++){
		int tem;
		cin >> tem;
		if(tem == 0){
			if(k){
				zd.pop_back();
			}
			k = max(k - 1,0);
		}else{
			cin >> tem;
			zd.push_back(tem);
			k ++;
		}
	}
	for(int i = 0;i < k;i++){
		cout << zd[i] << " ";
	}
	

	return 0;
}

