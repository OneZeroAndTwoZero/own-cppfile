#include<bits/stdc++.h>
using namespace std;

int n,t;
int in[100005],wen[100005];

int halffind(int a[],int L,int R,int x){
	int mid;
	while(L <= R){
		mid = (L + R) / 2;
		if(a[mid] == x) return mid;
		else if(x > a[mid]) L = mid + 1;
		else R = mid - 1;
	}
	return mid;
}


int main(){
	cin >> n >> t;
	for(int i = 0;i < n;i++){
		scanf("%d",&in[i]);
	}
	sort(in,in + n);
	for(int i = 0;i < t;i++){
		scanf("%d",&wen[i]);
		int ans = halffind(in,0,n - 1,wen[i]);
		if(in[ans] <= wen[i]){
			cout << in[ans] << " ";
		}else if(ans != 0){
			cout << in[ans - 1] << " ";
		}else{
			cout << "-1" << " ";
		}
	}
	
	return 0;
}
