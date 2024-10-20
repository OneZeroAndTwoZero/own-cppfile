#include<bits/stdc++.h>
using namespace std;

int ws(int a){
	if(a == 0) return 1;
	int ans = 0;
	while(a){
		ans ++;
		a /= 10;
	}
	return ans;
}

int main(){
	int a,d;
	cin >> a >> d;
	int w = ws(a);
	int tem = pow(10,d);
	int tem2 = pow(10,w - d);
	int jie = a % tem;
	int sheng = a / tem;
	int b = jie * tem2 + sheng;
	double ans = (double)b / (double)a;
	printf("%.2lf\n",ans);

	return 0;
}

