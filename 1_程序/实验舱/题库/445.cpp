#include<bits/stdc++.h>
using namespace std;

int main(){
	int v1,v2,t,s,l;
	cin >> v1 >> v2 >> t >> s >> l;
	int tt = 0,tg = 0;
	tg = l / v2;
	double tem = t / (v1 - v2) * v1;
	tt = l/ v1;
	if(tem < l && tem > 0){
		tt += s;
	}
	if(tt > tg){
		cout << 'T' << endl;
	}else if(tg > tt){
		cout << 'R' << endl;
	}else{
		cout << 'D' << endl;
	}
	cout << min(tt,tg) << endl;

	return 0;
}

