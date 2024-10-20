#include<bits/stdc++.h>
using namespace std;

struct dian{
	string dat;
	int l,r,st = 0;
};

string z,h;
dian a[105];
int pos,id = 0;

int build(int l,int r){
	if(l > r) return -1;
	int root = id ++;
	a[root].dat = h[pos];
	int t = z.find(h[pos ++],l);
	a[root].l = build(l,t - 1);
	a[root].r = build(t + 1,r);
	if(a[root].l == -1 && a[root].r == -1) a[root].st = 1;
	else{
		if(a[root].l != -1) a[root].st += a[a[root].l].st;
		if(a[root].r != -1) a[root].st += a[a[root].r].st;
	}
	
	return root;
}

void x(int u){
	if(u == -1) return;
	for(int i = 0;i < a[u].st;i ++) cout << a[u].dat;
	cout << endl;
	x(a[u].l);
	x(a[u].r);
}

int main(){
	cin >> h >> z;
	pos = 0;
	build(0,z.size() - 1);
	x(0);

	return 0;
}

