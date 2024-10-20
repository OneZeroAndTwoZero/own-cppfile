#include<bits/stdc++.h>
using namespace std;

struct ren{
	int id,z,y,s;
};

bool cmp(ren a,ren b){
	if(a.z != b.z) return a.z > b.z;
	return a.id < b.id;
}

ren p[102];

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		p[i].id = i + 1;
		cin >> p[i].y >> p[i].s;
		p[i].z = p[i].y + p[i].s;
	}
	sort(p,p + n,cmp);
	for(int i = 0;i < n;i++){
		cout << p[i].id << " " << p[i].z << endl;
	}

	return 0;
}

