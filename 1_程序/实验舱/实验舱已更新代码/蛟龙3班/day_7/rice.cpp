#include<bits/stdc++.h>
using namespace std;

struct ti{
	int id,b,c;
	bool operator <(const ti &a){
		if(c != a.c) return c > a.c;
		if(b != a.b) return b < a.b;
		return id > a.id;
	}
};

ti t[100002];

int main(){
	int n,m;
	cin >> n >> m; 
	for(int i = 0;i < n;i++){
		cin >> t[i].id >> t[i].b >> t[i].c;
	}
	sort(t,t + n);
	int AC[100002],sum = 0,k = 0;
	for(int i = 0;i < n;i++){
		sum += t[i].c;
		k ++;
		AC[i] = t[i].id;
		if(sum >= m) break;
	}
	sort(AC,AC + k);
	for(int i = 0;i < k;i++){
		cout << AC[i] << " ";
	}

	return 0;
}

