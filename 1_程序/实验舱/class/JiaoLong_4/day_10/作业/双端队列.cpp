#include<bits/stdc++.h>
using namespace std;

deque<int> a;
int n,op,d,x;

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&op);
		if(!op){
			scanf("%d %d",&d,&x);
			if(d){
				a.push_back(x);
			}else{
				a.push_front(x);
			}
		}else if(op == 1){
			scanf("%d",&x);
			printf("%d\n",a[x]);
		}else{
			scanf("%d",&d);
			if(a.size()){
				if(d){
					a.pop_back();
				}else{
					a.pop_front();
				}
			}
		}
	}

	return 0;
}

