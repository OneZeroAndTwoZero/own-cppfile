#include<bits/stdc++.h>
using namespace std;

int n,m,s,e;

int main(){
	cin >> n;
	bool a[n] = {0};
	cin >> m;
	for(int i = 0;i < m;i++){
		cin >> s >> e;
		for(int j = s - 1;j <= e - 1;j++){
		    if(a[j] == 0){
			    a[j] = 1;
		    }
	    }
	}
	int ans = 0;
	for(int i = 0;i < n;i++){
		if(!a[i]){
			ans ++;
		}
	}
	cout << ans << endl;
	
	return 0;
} 
