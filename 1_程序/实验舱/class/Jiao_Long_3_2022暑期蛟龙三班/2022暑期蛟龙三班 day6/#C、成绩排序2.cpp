#include<bits/stdc++.h>
using namespace std;

int n;

struct ren{
	int id,z,y,s;
};

ren p[102];

bool cmp(ren a,ren b){
	if(a.z != b.z) return a.z > b.z;
	return a.id < b.id;
}

int main(){
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

