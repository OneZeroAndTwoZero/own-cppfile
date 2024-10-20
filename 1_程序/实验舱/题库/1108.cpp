#include<bits/stdc++.h>
using namespace std;

int a[200005] = {0};

int main(){
	int n;
	cin >> n;
	int l = 0;
	int max = -1,max_n = 1;
	bool p = 1;
	while(n --){
		int op;
		cin >> op;
		if(op == 0){
			int x;
			cin >> x;
			if(x == max) max_n ++;
			else if(x > max) max = x,max_n = 1;
			a[l ++] = x;
		}else if(op == 1){
			if(l > 0){
				l --;
				int x = a[l];
				if(a[l] == max){
					max_n --;
					if(max_n == 0){
						p = 0;
					}
				}
			}
		}else{
			if(l == 0){
				cout << 0 << endl;
			}else{
				if(p) cout << max << endl;
				else{
					max = -1,max_n = 0;
					for(int i = 0;i < l;i++){
						if(a[i] > max){
							max = a[i];
						}
					}
					for(int i = 0;i < l;i++){
						if(a[i] == max){
						    max_n ++;
						}
					}
					p = 1;
					cout << max << endl;
				}
			}
		}
	}

	return 0;
}

