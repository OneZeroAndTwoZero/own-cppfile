#include<bits/stdc++.h>
using namespace std;

int t,n,k,m;
int a[105] = {0};

void cz(int in){
	for(int i = 0;i < 30;i++){
		a[i] = in % 2;
		in /= 2;
	}
}

int main(){
	scanf("%d",&t);
	while(t --){
		scanf("%d %d %d",&n,&k,&m);
		memset(a,0,sizeof(a));
		cz(k);
		int w = 0,m_ = m;
		while(m_){
			w ++;
			m_ /= 2;
		}
		if(pow(2,w + 1) - 1 < k){
			puts("-1");
		}else{
		    int check = 0;
			for(int i = 0;i < n;i++){
				int out = 0,quan = 1;
				for(int j = 0;j < 30;j++,quan *= 2){
					if(out + quan * a[j] <= m){
						out = out + quan * a[j];
						if(a[j]) a[j] --;
					}
				}
				printf("%d ",out);
				check = out ^ check;
			}
			cout << endl << check << endl;
		}
	}

	return 0;
}

