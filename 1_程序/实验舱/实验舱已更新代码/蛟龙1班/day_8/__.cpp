#include<bits/stdc++.h>
using namespace std;

int main(){
	int L,R;
	cin >> L >> R;
	for(int i = L;i <= R;i++){
		int p = i;
		int a;
		bool r = 1;
		while(p){
			a = p % 10;
			p = p / 10;
			if(a == 0 || i % a != 0){
				r = 0;
				break;
			}
		}
		if(r == 1){
			cout << i << " ";
		}
	}
	
	return 0;
}
