#include<bits/stdc++.h>
using namespace std;

int v1,v2,t,s,l;

int main(){
	cin >> v1 >> v2 >> t >> s >> l;
	int tg = l / v2;
	int tt = l / v1;
	int d = ceil((double)t / abs(v1 - v2));
	if(d < l){
		tt += s;
	}
	if(tt < tg){
		cout << 'R' << endl;
	}else if(tt == tg){
		cout << 'D' << endl;
	}else{
		cout << 'T' << endl;
	}
	cout << min(tt,tg) << endl;

	return 0;
}

