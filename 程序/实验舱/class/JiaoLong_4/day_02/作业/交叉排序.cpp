#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};
int n,f1,f2,l1,l2;

void kuai1(int f,int l){
	if(f >= l) return;
	int p = a[(f + l) / 2];
	int q = f,h = l;
	while(q <= h){
		while(a[q] < p){
			q ++;
		}
		while(a[h] > p){
			h --;
		}
		if(q <= h) swap(a[q ++],a[h --]);
	}
	kuai1(f,h);
	kuai1(q,l);
}

void kuai2(int f,int l){
	if(f >= l) return;
	int p = a[(f + l) / 2];
	int q = f,h = l;
	while(q <= h){
		while(a[q] > p){
			q ++;
		}
		while(a[h] < p){
			h --;
		}
		if(q <= h) swap(a[q ++],a[h --]);
	}
	kuai2(f,h);
	kuai2(q,l);
}

int main(){
	scanf("%d %d %d %d %d",&n,&f1,&l1,&f2,&l2);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	kuai1(--f1,--l1);
	kuai2(--f2,--l2);
	for(int i = 0;i < n;i++){
		printf("%d ",a[i]);
	}
	puts("");

	return 0;
}

