#include<bits/stdc++.h>
using namespace std;

double s,now = 2.0;
int ans = 0;

int main(){
	scanf("%lf",&s);
	while(s > 0){
		s -= now;
		ans ++;
		now *= 0.98;
	}
	printf("%d\n",ans);

	return 0;
}

