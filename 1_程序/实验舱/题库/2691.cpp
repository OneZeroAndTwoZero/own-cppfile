#include<bits/stdc++.h>
using namespace std;

struct yg{
	string name;
	double j,f,z;
	double gz;
}a[1005];

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i ++){
		cin >> a[i].name >> a[i].j >> a[i].f >> a[i].z;
		a[i].gz = a[i].j + a[i].f - a[i].z;
	}
	for(int i = 0;i < n;i++){
		cout << a[i].name << " ";
		printf("%.2lf\n",a[i].gz);
	}

	return 0;
}

