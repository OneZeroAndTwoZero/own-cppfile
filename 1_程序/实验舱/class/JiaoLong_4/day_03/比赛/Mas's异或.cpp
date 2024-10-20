#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};
int tem[100005] = {0};

void guib(int f,int l){
	if(f >= l){
	    return;
	}
	int mid = (f + l) / 2;
	guib(f,mid);
	guib(mid + 1,l);
	int t1 = f,t2 = mid + 1;
	int pos = 0;
	while(t1 <= mid || t2 <= l){
		if(t1 > mid || (t2 <= l && a[t2] < a[t1])) tem[pos] = a[t2 ++];
		else tem[pos] = a[t1 ++];
		pos ++;
	}
	for(int i = 0;i < pos;i++){
		a[f + i] = tem[i];
	}
}

int main(){
	int n,k,x;
	scanf("%d %d %d",&n,&k,&x);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 0;i < k;i++){
		guib(0,n - 1);
		for(int i = 0;i < n;i += 2){
			a[i] = a[i] ^ x;
		}
	}
	guib(0,n - 1);
	cout << a[n - 1] << " " << a[0] << endl;

	return 0;
}

