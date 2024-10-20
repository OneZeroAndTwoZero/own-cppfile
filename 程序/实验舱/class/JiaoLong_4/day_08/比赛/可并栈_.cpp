#include<bits/stdc++.h>
using namespace std;

int a[200005],b[200005];
int pos1 = 1,pos2 = 1;
int n;
string op,od1,od2;
int x;

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		cin >> op;
		if(op == "push"){
			cin >> od1;
			scanf("%d",&x);
			if(od1 == "A"){
				a[pos1] = i;
				a[pos1 ++] = x;
			}else{
				a[pos2] = i;
				b[pos2 ++] = x;
			}
		}else if(op == "pop"){
		    cin >> od1;
		    if(od1 == "A"){
		    	printf("%d\n",a[-- pos1]);
			}else{
				printf("%d\n",b[-- pos2]);
			}
		}
	}

	return 0;
}

