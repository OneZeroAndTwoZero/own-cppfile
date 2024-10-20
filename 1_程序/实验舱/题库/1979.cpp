#include<bits/stdc++.h>
using namespace std;

map<int,int> ok;
int a[100005] = {0};

int main(){
	int n;
	int c,d;
	int k = 0;
	while(cin >> n){
		if(ok[n] == 0){
			ok[n] = 1;
			a[k ++] = n;
		}else{
			c = n;
		}
	}
	sort(a,a + k);
	for(int i = 0;i < k - 1;i++){
		if(a[i] + 1 != a[i + 1]){
			d = a[i] + 1;
		}
	}
	cout << d << " " << c << endl;

	return 0;
}

