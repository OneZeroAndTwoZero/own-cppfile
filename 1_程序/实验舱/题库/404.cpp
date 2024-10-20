#include<bits/stdc++.h>
using namespace std;

vector<int> a;
int ans[105] = {0};

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		int tem;
		cin >> tem;
		a.push_back(tem);
	}
	int x;
	cin >> x;
	int k = 0;
	for(auto i : a){
		if(i != x){
		    ans[k ++] = i;
		}
	}
	sort(ans,ans + k);
	for(int i = 0;i < k;i++){
		cout << ans[i] << " ";
	}

	return 0;
}

