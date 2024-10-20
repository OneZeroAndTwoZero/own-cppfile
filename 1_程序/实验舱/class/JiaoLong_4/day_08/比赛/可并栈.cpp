#include<bits/stdc++.h>
using namespace std;

struct num{
	int z;
	int t;
};

num a[200005],b[200005];
int pos1 = 1,pos2 = 1;
int n;
string op,od1,od2;
int x;

bool cmp(num a,num b){
	return a.t < b.t;
}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		cin >> op;
		if(op == "push"){
			cin >> od1;
			scanf("%d",&x);
			if(od1 == "A"){
				a[pos1].t = i;
				a[pos1 ++].z = x;
			}else{
				a[pos2].t = i;
				b[pos2 ++].z = x;
			}
		}else if(op == "pop"){
		    cin >> od1;
		    if(od1 == "A"){
		    	printf("%d\n",a[-- pos1]);
			}else{
				printf("%d\n",b[-- pos2]);
			}
		}else{
			cin >> od1 >> od2;
			if(od1 == "A" && od2 == "B"){
				int t = 1;
				while(t != pos2){
					a[pos1 ++] = b[t ++];
				}
				pos2 = 1;
				sort(a + 1,a + pos1 + 1,cmp);
			}else if(od1 == "B" && od2 == "A"){
				int t = 1;
				while(t != pos1){
					b[pos2 ++] = a[t ++];
				}
				pos1 = 1;
				sort(b + 1,b + pos2 + 1,cmp);
			}
		}
	}

	return 0;
}

