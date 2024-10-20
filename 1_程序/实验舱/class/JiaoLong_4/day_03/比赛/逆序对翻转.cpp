#include<bits/stdc++.h>
using namespace std;

int a[100005] = {0};
int tem[100005] = {0};
long long ans = 0;

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
		if(t1 > mid || (t2 <= l && a[t2] < a[t1])){
			ans += (mid - t1 + 1);
			tem[pos] = a[t2 ++];
		}else{
			tem[pos] = a[t1 ++];
		}
		pos ++;
	}
	
	for(int i = 0;i < pos;i++){
		a[f + i] = tem[i];
	}
}

int main(){
	int n,m;
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	guib(0,n - 1); //归并排序 
	scanf("%d",&m);
	int check = ans & 1; //原本的奇偶性 
	for(int i = 0;i < m;i++){
		int f,l;
		scanf("%d %d",&f,&l);
		int len = l - f + 1;
		long long kn = len * (len - 1) / 2; //区间内涵的对数  
		if(kn & 1){ //对数是奇数，奇偶性翻转 
			check = !check; 
		}
		if(check){
		    cout << "odd" << endl;
		}else{
			cout << "even" << endl;
		}
	}

	return 0;
}

