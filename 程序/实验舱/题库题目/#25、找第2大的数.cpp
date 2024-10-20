#include<bits/stdc++.h>
using namespace std;

int n,max_ = -0x3f3f3f3f,max_2;
int a[100005] = {0};

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif
	
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
		if(a[i] > max_)
			max_ = a[i];
	}
	max_2 = a[0];
	for(int i = 0;i < n;i++){
		if(a[i] > max_2 && a[i] != max_){
			max_2 = a[i];
		}
	}
	printf("%d\n",max_2);
	
	return 0;
} 
