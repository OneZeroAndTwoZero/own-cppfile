#include<bits/stdc++.h>
using namespace std;

int main(){
	int s = -1,x = 100,z = 100,y = -1;
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		int t1,t2;
		scanf("%d,%d",&t1,&t2);
		s = max(t1,s);
		x = min(t1,x);
		z = min(t2,z);
		y = max(t2,y);
	}
	s ++,x --,z --,y ++;
	printf("%d,%d\n",x,z);
	printf("%d,%d\n",s,y);

	return 0;
}

