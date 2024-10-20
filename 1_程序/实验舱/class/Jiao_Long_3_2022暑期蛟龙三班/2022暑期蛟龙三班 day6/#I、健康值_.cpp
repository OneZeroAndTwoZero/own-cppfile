#include<bits/stdc++.h>
using namespace std;

int lcm(int a,int b){
	if(a % b == 0) return b;
	return lcm(b,a % b);
}

struct h{
	int t,w;
	double zhi;
};

h tem[1002];

int main(){
	h max,min;
	max.zhi = 0,min.zhi = 100;
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> tem[i].t >> tem[i].w;
		tem[i].zhi = (double)tem[i].t/tem[i].w;
		if(max.zhi < tem[i].zhi) swap(max,tem[i]);
		else if(min.zhi > tem[i].zhi) swap(min,tem[i]);
	}
	int j = lcm(max.t,max.w);
	printf("%d/%d ",max.t/j,max.w/j);
	j = lcm(min.t,min.w);
	printf("%d/%d\n",min.t/j,min.w/j);

	return 0;
}

