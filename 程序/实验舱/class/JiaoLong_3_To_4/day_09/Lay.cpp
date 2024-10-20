#include<bits/stdc++.h>
using namespace std;

map<int,bool> is_know;
map<int,int> ai;
int ans = 1;

void cz(int x){
	if(is_know[ai[x]] == 0){
		is_know[ai[x]] = 1;
		ans++;
		cz(ai[x]);
	}else{
		return;
	}
}

int main(){
	int n,x;
	cin >> n >> x;
	is_know[x] = 1;
	for(int i = 0;i < n;i++){
		cin >> ai[i + 1];
	}
	cz(x);
	cout << ans << endl;

	return 0;
}

