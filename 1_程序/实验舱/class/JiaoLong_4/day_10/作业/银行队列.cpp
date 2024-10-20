#include<bits/stdc++.h>
using namespace std;

int t,n;
queue<int> a,b;

int main(){
	while(~scanf("%d",&t)){
		for(int i = 0;i < t;i++){
			scanf("%d",&n);
			if(n & 1) a.push(n);
			else b.push(n);
		}
		while(1){
			if(!a.size() && !b.size()) break;
			for(int i = 0;i < 2;i++){
				if(a.size()){
					printf("%d ",a.front());
					a.pop();
				}
		    }
		    if(b.size()){
		    	printf("%d ",b.front());
		    	b.pop();
			}
		}
		puts("");
	}

	return 0;
}

