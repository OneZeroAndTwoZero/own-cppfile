#include<bits/stdc++.h>
using namespace std;

struct peo{
	int id,tall;
	string name;
}a[10005];
peo dq[10005];

bool p_cmd(peo a,peo b){
	if(a.tall != b.tall){
		return a.tall > b.tall;
	}
	return a.name < b.name;
}

int main(){
	int n,k;
	cin >> n >> k;
	for(int i = 0;i < n;i++){
		cin >> a[i].name >> a[i].tall;
		a[i].id = i;
	}
	sort(a,a + n,p_cmd);
	int n_r = 0;
	for(int t = 0;t < k;t++){
		int rs = t == 0 ? n / k + n % k: n / k;
		dq[rs / 2] = a[n_r ++];
		for(int i = 0;i < rs - 1;i++){
			dq[(rs / 2) + (i / 2 + 1) * (i % 2 == 1 ? 1 : -1)] = a[n_r ++];
		}
		for(int i = 0;i < rs - 1;i++){
			cout << dq[i].name << " ";
		}
		cout << dq[rs - 1].name << endl;
	}

	return 0;
}

