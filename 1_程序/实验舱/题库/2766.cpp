#include<bits/stdc++.h>
using namespace std;

struct z{
	int d;
	int id;
};

z a[9],tem[9];

bool cmp(z a,z b){
	return a.d < b.d;
}

int mc(int n){
	for(int i = 0;i < 9;i++){
		if(tem[i].id == n){
			return i + 1;
		}
	}
}

int main(){
	int k = 0;
	int r,c;
	cin >> r >> c;
	for(int i = 0;i < r;i++){
		bool p = 0;
		int di = 0;
		for(int j = 0;j < c;j++){
			char t;
			cin >> t;
			if(t >= '0' && t <= '9'){
				di = c - 1 - j;
				p = 1;
			}
		}
		if(p){
			a[k].d = di;
			a[k].id = k;
			tem[k].d = di;
			tem[k].id = k;
			k ++;
		}
	}
	sort(tem,tem + 9,cmp);
	for(int i = 0;i < 9;i++){
		cout << mc(a[i].id) << endl;
	}

	return 0;
}

