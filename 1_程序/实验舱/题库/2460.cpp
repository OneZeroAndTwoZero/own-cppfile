#include<bits/stdc++.h>
using namespace std;

struct ma{
	int name;
	int d,v;
	double t;
	bool operator < (const ma & te) const{
		if(t != te.t) return t < te.t;
		return name < te.name;
	}
}a[30005];

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i].name >> a[i].d >> a[i].v;
		a[i].t = (double)a[i].d / a[i].v;
	}
	sort(a,a + n);
	for(int i = 0;i < 3;i++){
		cout << a[i].name << " ";
	}
	cout << endl;

	return 0;
}

