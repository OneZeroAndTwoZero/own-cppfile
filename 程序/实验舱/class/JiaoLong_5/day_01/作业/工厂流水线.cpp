#include<bits/stdc++.h>
using namespace std;

struct dian{
	int lei,ti;
	bool operator < (const dian &check)const{
		if(ti == check.ti) return lei < check.lei;
		return ti < check.ti;
	}
};

int n,x,y,pos = 0,ans = 0,now = 0;
dian a[200005] = {0};

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d %d",&x,&y);
		a[pos ++] = {0,x};
		a[pos ++] = {1,y};
	}
	sort(a,a + pos);
	for(int i = 0;i < pos;i++){
		if(a[i].lei == 0){
			now ++;
			ans = max(now,ans);
		}else{
			now --;
		}
	}
	printf("%d\n",ans);

	return 0;
}

