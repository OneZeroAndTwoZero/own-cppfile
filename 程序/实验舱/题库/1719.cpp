#include<bits/stdc++.h>
using namespace std;

struct fs{
	int z,m;
}a[10005];

bool cmp(fs a,fs b){
	int fm = a.m * b.m;
	int fz_a = b.m * a.z;
	int fz_b = b.z * a.m;
	return fz_a < fz_b;
}

int gcd(int a,int b){
	return b == 0 ? a : gcd(b,a % b);
}

int main(){
	int n;
	cin >> n;
	int k = 0;
	for(int i = 2;i <= n;i++){
		for(int j = 1;j < i;j++){
			if(gcd(i,j) == 1) a[k].m = i,a[k ++].z = j;
		}
	}
	sort(a,a + k,cmp);
	cout << "0/1 ";
	for(int i = 0;i < k;i++){
		printf("%d/%d ",a[i].z,a[i].m);
	}
	cout << "1/1" << endl;

	return 0;
}

