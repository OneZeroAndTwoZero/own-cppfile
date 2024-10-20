#include<bits/stdc++.h>
using namespace std;

bool ok(int k,int x){
	if(k == x) return 1;
	if(k > x) return 0;
	return ok(2 * k + 1,x) || ok(3 * k + 1,x);
}

int main(){
	int k,x;
	scanf("%d,%d",&k,&x);
	int tem1 = max(k,x),tem2 = min(k,x);
	if(ok(tem2,tem1)){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}

	return 0;
}

