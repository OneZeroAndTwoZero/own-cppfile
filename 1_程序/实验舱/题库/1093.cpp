#include<bits/stdc++.h>
using namespace std;

struct ci{
	string name;
	double r,c,s; 
}a[1005];

bool cmp(ci a,ci b){
	return a.name < b.name;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i].name >> a[i].r;
		a[i].c = 3.14 * 2 * a[i].r,a[i].s = a[i].r * a[i].r * 3.14;
	}
	sort(a,a + n,cmp);
	for(int i = 0;i < n;i++){
		cout << a[i].name;
		printf(" %.0lf %.1lf %.1lf\n",a[i].r,a[i].c,a[i].s);
	}

	return 0;
}

