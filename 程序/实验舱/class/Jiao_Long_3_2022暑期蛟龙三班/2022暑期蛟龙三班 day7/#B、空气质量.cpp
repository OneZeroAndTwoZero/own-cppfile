#include<bits/stdc++.h>
using namespace std;

struct air{
	int ai,bi,cha,id;
	bool operator < (const air &a) const{
		if(cha != a.cha) return cha > a.cha;
		return id < a.id;
	}
};

int n;
air a[100002];

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i].ai >> a[i].bi;
		a[i].id = i + 1;
		a[i].cha = abs(a[i].ai - a[i].bi);
	}
	sort(a,a + n);
	for(int i = 0;i < n;i++){
		cout << a[i].id << " ";
	}

	return 0;
}

