#include<bits/stdc++.h>
using namespace std;

bool which(int a){
	if(a == 0) return 0;
	int z = 0,o = 0;
	while(a){
		int tem = a % 2;
		if(tem) o ++;
		else z ++;
		a /= 2;
	}
	if(o > z) return 1;
	return 0;
}

int main(){
	int n,m;
	cin >> n >> m;
	int a = 0,b = 0;
	for(int i = n;i <= m;i++){
		if(which(i)){
			a ++;
		}else{
			b ++;
		}
	}
	cout << a << " " << b << endl;

	return 0;
}

