#include<bits/stdc++.h>
using namespace std;

struct num{
	int z,m;
};

int n,cnt;
num a[10005];

bool cmp(num a,num b){
	return b.m * a.z < b.z * a.m;
}

int gcd(int a,int b){
	return b == 0 ? a : gcd(b,a % b);
}

int main(){
	scanf("%d",&n);
	for(int i = 2;i <= n;i++){
		for(int j = 1;j < i;j++){
			if(gcd(i,j) == 1) a[cnt].m = i,a[cnt].z = j,cnt ++;
		}
	}
	sort(a,a + cnt,cmp);
	printf("0/1 ");
	for(int i = 0;i < cnt;i++){
		printf("%d/%d ",a[i].z,a[i].m);
	}
	printf("1/1\n");

	return 0;
}

