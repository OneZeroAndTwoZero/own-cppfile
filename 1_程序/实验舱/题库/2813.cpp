#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t --){
		int n;
		cin >> n;
		int z = 0,f = 0;
		for(int i = 0;i < n;i++){
			int t1,t2;
			cin >> t1 >> t2;
			if(t1 > 0){
				z ++;
			}else{
				f ++;
			}
		}
		if(z == 1 || z == 0 || f == 1 || f == 0){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}

	return 0;
}

