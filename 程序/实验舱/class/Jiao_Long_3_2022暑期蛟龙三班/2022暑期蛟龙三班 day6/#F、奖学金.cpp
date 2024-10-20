#include<bits/stdc++.h>
using namespace std;

int n;

struct ren{
	int id,z,y,s,w;
};

bool cmp(ren a,ren b){
	if(a.z != b.z) return a.z > b.z;
	if(a.y != b.y) return a.y > b.y;
	return a.id < b.id;
}

ren p[302];

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> p[i].y >> p[i].s >> p[i].w;
		p[i].id = i + 1;
		p[i].z = p[i].y + p[i].s + p[i].w;
	}
	sort(p,p + n,cmp);
	for(int i = 0;i < 5;i++){
		cout << p[i].id << " " << p[i].z << endl;
	}

	return 0;
}

