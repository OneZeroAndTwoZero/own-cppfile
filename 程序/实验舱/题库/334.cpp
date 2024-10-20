#include<bits/stdc++.h>
using namespace std;

struct cj{
	int c,m,e;
	int z;
	int id;
}a[105];

bool cmp(cj a,cj b){
	if(a.z != b.z){
		return a.z > b.z;
	}
	return a.id < b.id;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i].c >> a[i].m >> a[i].e;
		a[i].id = i;
		a[i].z = a[i].c + a[i].m + a[i].e;
	}
	sort(a,a + n,cmp);
	int k;
	cin >> k;
	cout << a[k - 1].id + 1 << " " << a[k - 1].z << endl;

	return 0;
}

