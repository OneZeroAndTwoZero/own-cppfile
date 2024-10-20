#include<bits/stdc++.h>
using namespace std;

int a,b;
double ans;

int main(){
//#ifndef ONLINE_JUDGE
//    freopen("D:\\code\\data.in","r",stdin);
//    freopen("D:\\code\\data.out","w",stdout);
//#endif

	scanf("%d %d",&a,&b);
	if(!b){
		printf("%d/%d=Error\n",a,b);
		return 0;
	}
	printf("%d/",a);
	if(b < 0) printf("(");
	printf("%d",b);
	if(b < 0) printf(")");
	printf("=");
	ans = (double)a / b;
	printf("%.2lf\n",ans);

	return 0;
}

