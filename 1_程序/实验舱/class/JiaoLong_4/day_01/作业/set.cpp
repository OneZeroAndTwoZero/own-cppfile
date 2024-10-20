#include<bits/stdc++.h>
using namespace std;

int n,q,x;
set<int> a;

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&x);
		a.insert(x);
	}
	scanf("%d",&q);
	for(int i = 0;i < q;i++){
		scanf("%d",&x);
		if(*a.find(x) == x){
			puts("0");
		}else{
			a.insert(x);
			set<int> :: iterator it;
			it  = a.find(x);
			if(it == a.begin()){
				it ++;
				printf("%d\n",*it - x);
			}else if(++ it == a.end()){
				it --;it --;
				printf("%d\n",x - *it);
			}else{
				set<int> :: iterator it2 = a.find(x);
				it --;it --;it2 ++;
				printf("%d\n",min(x - *it,*it2 - x));
			}
			a.erase(a.find(x));
		}
	}

	return 0;
}

