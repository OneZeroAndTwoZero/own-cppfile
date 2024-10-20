#include<bits/stdc++.h>
using namespace std;

int n,q,op,x,y,k;
int a[100005] = {0};

int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	cin >> q;
	while(q --){
		cin >> op;
		if(op == 1){
			cin >> x >> y;
			a[-- x] = y;
		}else{
			cin >> x >> y >> k;
			cout << nth_element(a + x - 1,k,a + y) << endl;
		}
	}

	return 0;
}

