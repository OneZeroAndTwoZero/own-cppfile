#include<bits/stdc++.h>
using namespace std;

int n,k;

struct pai_{
	string name;
	int b,t;
	int id;
	int z;
};

bool cmp(pai_ a,pai_ b){
	if(a.z != b.z){
		return a.z > b.z;
	}
	return a.id < b.id;
}

pai_ r[1002];

int main(){
	cin >> n >> k;
	for(int i = 0;i < n;i++){
		r[i].id = i + 1;
		cin >> r[i].name >> r[i].b >> r[i].t;
		r[i].z = r[i].b + r[i].t;
	}
	sort(r,r + n,cmp);
	int t;
	for(int i = 0;i < k;i++){
	    cin >> t;
	    cout << r[t - 1].name << endl;
	}

	return 0;
}

