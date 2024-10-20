#include<bits/stdc++.h>
using namespace std;

int a[10000005] = {0},b[10000005] = {0};

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 0;i < m;i++){
		scanf("%d",&b[i]);
	}
	int t1 = 0,t2 = 0;
	while(t1 < n || t2 < m){
		if(t2 >= m || (t1 < n && a[t1] <= b[t2])){
			printf("%d\n",a[t1 ++]);
		}else{
			printf("%d\n",b[t2 ++]);
		}
	}

	return 0;
}

