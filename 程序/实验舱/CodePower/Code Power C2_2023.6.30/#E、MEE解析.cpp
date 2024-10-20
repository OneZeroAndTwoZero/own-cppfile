#include<bits/stdc++.h>
using namespace std;

struct node{
	int fh,q;
	double h;
};

int t,t1;
string s;
double t2;
node ans;

node zhuan(){
	int f = 1;
	if(s[0] == '1') f = -1;
	t1 = 0,t2 = 0;
	for(int i = 4;i > 0;i--){
		t1 += (s[i] - '0') * pow(2,4 - i);
	}
	for(int i = 5;i < 12;i++){
		t2 += pow(2,4 - i) * (s[i] - '0');
	}
	return {f,t1,t2};
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("data.in","r",stdin);
    freopen("data.out","w",stdout);
#endif
	scanf("%d",&t);
	while(t --){
	    cin >> s;
	    ans = zhuan();
	    if(ans.fh == -1) printf("-");
	    if(ans.q == 0 && ans.h == 0){
	    	puts("0");
		}else if(ans.q == pow(2,4) - 1){
			if(ans.h == 0){
				puts("INF");
			}else{
				puts("NaN");
			}
		}else{
			double o = pow(2,ans.q - 7) * (1 + ans.h);
			printf("%.15lf\n",o);
		}
	}

	return 0;
}
