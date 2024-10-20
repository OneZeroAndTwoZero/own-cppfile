#include<iostream>
using namespace std;
const int N=1e6+9,mod=998244353,M[2][5]={{1,0,3,2,1},{2,4,3,2,1}};
inline int add(int x,int y){return x+y>=mod?x-mod+y:x+y;}
int n,f[2][5];char s[N];
int main(){
	freopen("sequence.in","r",stdin);
	freopen("sequence.out","w",stdout);
	scanf("%d%s",&n,s);
	int cur=0;f[cur][0]=1;
	for(int i=0;i<n;i++){
		int pre=cur;cur^=1;
		for(int j=0;j<5;j++) f[cur][j]=f[pre][j];
		for(int k=0;k<2;k++) if(s[i]!=('0'+(k^1)))
			for(int j=0;j<5;j++) 
				f[cur][M[k][j]]=add(f[cur][M[k][j]],f[pre][j]);
	}
	printf("%d\n",add(f[cur][0],f[cur][3]));
	return 0;
}
