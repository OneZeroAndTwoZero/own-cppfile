#include<bits/stdc++.h>
using namespace std;

struct th{
	int ti;
	int si;
};

int n;
th a[10005] = {0};

bool cmp(th k,th b){
	return k.si > b.si;
}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d %d",&a[i].ti,&a[i].si);
	}
	sort(a,a + n,cmp);
	int zz = 10000;
	for(int i = 0;i < n;i++){
		zz = a[i].si - a[i].ti;
		if(i < n - 1){
			if(a[i].si - a[i + 1].si < a[i].ti){
				a[i + 1].ti += a[i].ti - (a[i].si - a[i + 1].si);
			}
		}
	}
	if(zz < 0){
		cout << -1 << endl;
	}else{
		printf("%d\n",zz);
	}

	return 0;
}

