#include<bits/stdc++.h>
using namespace std;

bool su(int a){
	if(a < 2 || a % 2 == 0 && a != 2) return 0;
	if(a == 2) return 1;
	int n = sqrt(a);
	for(int i = 3;i <= n;i+= 2){
	    if(a % i == 0) return 0;
	}
	return 1;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif
	
	int n;
	cin >> n;
	if(n <= 1){
		return 0;
	}
	cout << "2 ";
	for(int i = 3;i <= n;i += 2){
		if(su(i)) cout << i << " ";
	}

	return 0;
}


