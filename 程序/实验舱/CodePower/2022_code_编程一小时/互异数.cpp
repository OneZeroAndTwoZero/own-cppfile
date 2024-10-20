#include<bits/stdc++.h>
using namespace std;

map<int,bool> ok;
map<int,char> huan;

int cz(long long k,int tem){
	int n = 0;
	while(k >= tem){
		n ++;
		while(!ok[n]) n ++;
		k -= tem;
	}
	return n;
}

int main(){
	huan[10] = 'A',huan[11] = 'B',huan[12] = 'C',huan[13] = 'D',huan[14] = 'E',huan[15] = 'F';
	int k;
	cin >> k;
	long long dq = 0;
	int ws;
	long long tem = 0;
	for(int i = 1;;i++){
		long long now = 1;
		int tem_i = i;
		while(tem_i --){
			now *= (16 - tem_i);
		}
		dq += now;
		if(dq > k){
			ws = i;
			break;
		}
		tem = now;
	}
	cout << tem << endl;
	while(k){
		int d = cz(k,tem);
		ok[d] = 1;
		k %= tem;
		tem /= (16 - ws);
		cout << tem << endl;
		ws --;
		if(d < 10) cout << d;
		else cout << huan[d];
	}

	return 0;
}

