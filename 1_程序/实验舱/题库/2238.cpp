#include<bits/stdc++.h>
using namespace std;

struct p{
	int t,d;
};

p a[100005];

bool cmp(p a,p b){
	return a.t < b.t;
}

int main(){
	double zd = -1;
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i].t >> a[i].d;
	}
	sort(a,a + n,cmp);
	for(int i = 1;i < n;i++){
		double v = (double)(abs(a[i].d - a[i - 1].d)) / (a[i].t - a[i - 1].t);
		zd = max(zd,v);
	}
	printf("%.1lf\n",zd);

	return 0;
}

