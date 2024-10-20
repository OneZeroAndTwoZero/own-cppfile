#include<bits/stdc++.h>
using namespace std;

int a[1000005] = {0};

int main(){
	int f = 500000,l = 500001;
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		int op;
		cin >> op;
		if(op == 0){
			int od,x;
			cin >> od >> x;
			if(od == 0){
				a[f] = x;
				f --;
			}else{
				a[l] = x;
				l ++;
			}
		}else if(op == 1){
			int x;
			cin >> x;
			cout << a[f + x + 1] << endl;
		}else{
			int od;
			cin >> od;
			if(od == 0){
				f ++;
			}else{
				l --;
			}
		}
	}

	return 0;
}

