#include<bits/stdc++.h>
using namespace std;

int t[10005] = {0};
int t2[10005] = {0};

void cz(){
	for(int i = 0;i < 1055;i++){
		t[i] = t2[i];
		t2[i] = 0;
	}
}

int main(){
	int n,k,x;
	scanf("%d %d %d",&n,&k,&x);
	for(int i = 0;i < n;i++){
		int tem;
		scanf("%d",&tem);
		t[tem] ++;
	}
	for(int i = 0;i < k;i++){
		int pos = 0;
		for(int j = 0;j < 1055;j++){
			if(t[j]){
				int ans = j ^ x;
				int sl;
				if(pos % 2 == 1){
					sl = t[j] / 2;
				}else{
					sl = (t[j] + 1) / 2;
				}
				pos += t[j];
				t2[ans] += sl;
				t2[j] += (t[j] - sl);
			}
		}
		cz(); //就是t1与t2两个桶的重置工作 
	}
	int zx = 10000,zd = -1;
	for(int i = 0;i < 1055;i++){
		if(t[i]){
			zx = min(i,zx);
			zd = max(i,zd);
		}
	}
	cout << zd << " " << zx << endl;

	return 0;
}

