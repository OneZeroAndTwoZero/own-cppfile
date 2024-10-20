#include<bits/stdc++.h>
using namespace std;

struct day_{
	int m,d,y;
	bool operator < (const day_ &da) const{
		if(y != da.y) return y < da.y;
		if(m != da.m) return m < da.m;
		return d < da.d;
	}
};

day_ d[1002];

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		scanf("%d/%d/%d",&d[i].m,&d[i].d,&d[i].y);
	}
	sort(d,d + n);
	for(int i = 0;i < n;i++){
		printf("%02d/%02d/%04d\n",d[i].m,d[i].d,d[i].y);
	}

	return 0;
}

