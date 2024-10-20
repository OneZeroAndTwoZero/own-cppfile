#include<bits/stdc++.h>
using namespace std;

struct dian{
	string dat;
	int l,r;
};

string z,h;
dian a[105];
int pos,id = 0;

int build(int l,int r){
	if(l > r) return -1;
	int root = id ++;
	a[root].dat = h[-- pos];
	int t = z.find(h[pos]);
	a[root].r = build(t + 1,r);
	a[root].l = build(l,t - 1);
	return root;
}

void x(int u){
	if(u == -1) return;
	cout << a[u].dat;
	x(a[u].l);
	x(a[u].r);
}

int main(){
	cin >> z >> h;
	pos = z.size();
	build(0,z.size() - 1);
	x(0);

	return 0;
}

