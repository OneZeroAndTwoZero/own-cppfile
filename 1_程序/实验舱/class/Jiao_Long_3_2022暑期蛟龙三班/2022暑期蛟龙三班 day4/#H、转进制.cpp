#include<bits/stdc++.h>
using namespace std;

int x,y,n;

void ton(int x,int n){
	if(x == 0) return;
	ton(x / n,n);
	cout << x % n;
}

int main(){
	cin >> x >> y >> n;
	for(int i = x;i <= y;i++){
		if(i == 0){
			cout << 0 << endl;
		}else{
			ton(i,n);
			cout << endl;
		}
	}

	return 0;
}

