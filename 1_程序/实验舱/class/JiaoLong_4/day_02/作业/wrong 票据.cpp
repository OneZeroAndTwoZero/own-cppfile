#include<bits/stdc++.h>
using namespace std;

int t[100005] = {0};
int id;
int s = 0;
int m,n;

int main(){
	while(cin >> id){
		t[id] ++;
	}
	for(int i = 0;i < 100004;i++){
		if(t[i]) s++;
		if(s > 0 && !t[i]) m = i,s = -1000000;
		if(t[i] > 1) n = i;
	}
	printf("%d %d\n",m,n);

	return 0;
}

