#include<bits/stdc++.h>
using namespace std;

int k,l;
long long zx,zd;
int a[100005] = {0},b[100005] = {0};

bool cmp(int a,int b){
	return a > b;
}

int main(){
	scanf("%d %d",&k,&l);
	for(int i = 0;i < k;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 0;i < l;i++){
		scanf("%d",&b[i]);
	}
	for(int i = 0;i < k;i++){
		bool check = 0;
		for(int j = 0;j < l;j++){
			if(b[j] >= a[i]) check = 1;
		}
		if(!check){
			cout << -1 << endl;
			return 0;
		}
	}
	for(int i = 0;i < l;i++){
		bool check = 0;
		for(int j = 0;j < k;j++){
			if(a[j] >= b[i]) check = 1;
		}
		if(!check){
			cout << -1 << endl;
			return 0;
		}
	}
	zx = 0,zd = 0;
	for(int i = 0;i < k;i++){
		for(int j = 0;j < l;j++){
			zd += min(a[i],b[j]);
		}
	}
	if(k > l){
		for(int i = 0;i < k;i++){
			swap(a[i],b[i]);
		}
		swap(k,l);
	}
	sort(b,b + l,cmp);
	sort(a,a + k,cmp);
	for(int i = 0,j = 0;i < k;i++,j ++){
		while(b[j] != a[i]){
			zx += b[j];
			j ++;
		}
		zx += a[i];
	}
	cout << zx << " " << zd << endl;

	return 0;
}

