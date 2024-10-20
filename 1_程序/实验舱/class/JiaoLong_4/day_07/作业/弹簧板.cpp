#include<bits/stdc++.h>
using namespace std;

struct dian{
	int a,b;
};

dian a[205];
int n;

int cz(int t){
	if(t >= n) return 0;
	return min(cz(t + a[t].a),cz(t + a[t].b)) + 1;
}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i].a);
	}
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i].b);
	}
	printf("%d\n",cz(0));

	return 0;
}

