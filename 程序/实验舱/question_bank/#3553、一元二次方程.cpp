#include<bits/stdc++.h>
using namespace std;

int T,m;
int a,b,c,der;

int gcd(int a,int b){
	if(b == 0) return a;
	return gcd(b,a % b);
}

int getnum(int x){
	int res = 1;
	for(int i = 2;i <= x / i;i ++){
		while(x % (i * i) == 0){
			x /= (i * i);
			res *= i;
		}
	}
	return res;
}

void output1(int fz,int fm,bool isnet){
	if(fz == 0){
		if(!isnet){
			printf("0");
		}
		return;
	}
	int fh = 1;
	if(fz < 0){
		fh *= -1;
		fz = abs(fz);
	}
	if(fm < 0){
		fh *= -1;
		fm = abs(fm);
	}
	int cur = gcd(fz,fm);
	fz /= cur,fm /= cur;
	if(fh == -1){
		printf("-");
	}
	printf("%d",fz);
	if(fm > 1){
		printf("/%d",fm);
	}
}

void output2(int q,int x,int fm,int ispre){
	if(q < 0){
		q = abs(q);
	}
	if(fm < 0){
		fm = abs(fm);
	}
	if(ispre){
		printf("+");
	}
	int cur = gcd(q,fm);
	q /= cur,fm /= cur;
	if(q != 1){
		printf("%d*",q);
	}
	printf("sqrt(%d)",x);
	if(fm != 1){
		printf("/%d",fm);
	}
}

int main(){
	freopen("uqe.in","r",stdin);
	freopen("uqe.out","w",stdout);
	
	scanf("%d %d",&T,&m);
	while(T --){
		scanf("%d %d %d",&a,&b,&c);
		der = b * b - 4 * a * c;
		if(der < 0){
			printf("NO\n");
		}else{
			if(der == 0){
				output1(-1 * b,2 * a,0);
			}else{
				int tem = getnum(der);
				der /= (tem * tem);
				if(der == 1){
					if(a > 0) output1(-1 * b + tem,2 * a,0);
					else output1(-1 * b - tem,2 * a,0);
				}else{
					output1(-1 * b,2 * a,1);
					if(b != 0) output2(tem,der,2 * a,1);
					else output2(tem,der,2 * a,0);
				}
			}
			printf("\n");
		}
	}
	
	return 0;
}