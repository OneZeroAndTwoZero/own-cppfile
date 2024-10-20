#include<bits/stdc++.h>
using namespace std;

struct cfx{
	int a,b,c,s,id;
};

bool cmp(cfx a,cfx b){
	if(a.s != b.s) return a.s > b.s;
	if(a.c != b.c) return a.c > b.c;
	return a.id < b.id;
}

cfx c_[1002];

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		c_[i].id = i + 1;
		cin >> c_[i].a >> c_[i].b;
		c_[i].s = c_[i].a * c_[i].b;
		c_[i].c = 2 * (c_[i].a + c_[i].b);
	}
	sort(c_,c_ + n,cmp);
	for(int i = 0;i < n;i++){
		cout << c_[i].a << " " << c_[i].b << " " << c_[i].s << endl;
	}

	return 0;
}

