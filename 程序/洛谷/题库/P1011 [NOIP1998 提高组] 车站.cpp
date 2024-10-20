#include<bits/stdc++.h>
using namespace std;

int a,n,m,x;
int s[20] = {0};

int main(){
	scanf("%d %d %d %d",&a,&n,&m,&x);
	for(int i = 0;i <= 20000;i ++){
		int t = a;
		s[1] = a,s[2] = i;
		for(int j = 3;j < n;j ++){
			s[j] = s[j - 1] + s[j - 2];
			t += s[j];
			t -= s[j - 1]; 
		}
		if(t == m){
			t = a;
			if(x == 1 || x == 2){
				printf("%d\n",a);
			}else{
				for(int j = 3;j <= x;j ++){
					t = t + s[j] - s[j - 1];
				}
				printf("%d\n",t);
			}
			return 0;
		}
	}

	return 0;
}

