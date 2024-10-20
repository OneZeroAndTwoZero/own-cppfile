#include<bits/stdc++.h>
using namespace std;

int n,x,pos = 0;
string op;
int a[200005] = {0};

int main(){
	cin >> n;
	while(n --){
		cin >> op;
		if(op == "Push"){
			cin >> x;
			a[pos ++] = x;
		}else if(op == "Pop"){
			if(!pos){
				cout << "Invalid" << endl;
			}else{
				cout << a[-- pos] << endl;
			}
		}else{
			if(!pos){
				cout << "Invalid" << endl;
			}else{
				if(pos & 1){
					cout << a[pos / 2] << endl;
				}else{
					cout << a[(pos - 1) / 2] << endl;
				}
			}
		}
	}

	return 0;
}

