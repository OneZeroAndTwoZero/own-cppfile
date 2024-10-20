#include<bits/stdc++.h>
using namespace std;

bool aorb(int a){
	if(a == 0) return 0;
	int l = 0,y = 0;
	while(a){
		int tem = a % 2;
		if(tem) y ++;
		else l ++;
		a /= 2;
	}
	if(y > l) return 1;
	return 0;
}

int main(){
	int l,r;
	cin >> l >> r;
	int a = 0,b = 0;
	for(int i = l;i <= r;i++){
		if(aorb(i)){
			a ++;
		}else{
			b ++;
		}
	}
	cout << a << " " << b << endl;

	return 0;
}

