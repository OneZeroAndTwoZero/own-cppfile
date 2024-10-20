#include<bits/stdc++.h>
using namespace std;

long long t,n;
set<long long> ans;

bool su(long long a){
	if(a == 2) return 1;
	if(a < 2 || !(a & 1)) return 0;
	for(int i = 2;i <= a / i;i++){
		if(a % i){
			return 0;
		}
	}
	return 1;
}

void meij(long long a){
	if(a > 1e14) return;
	if(su(a)){
		ans.insert(a);
	}
	meij(a * 10 + 4);
	meij(a * 10 + 7);
}

int main(){
	cin >> t;
	meij(0);
	while(t --){
		cin >> n;
		cout << *upper_bound(ans,ans + ans.size(),n) << endl;
	}

	return 0;
}

