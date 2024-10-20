#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int t1,t2,t3;
	for(int i = 1;i < n;i++){
		t3 = 7 * i;
		for(int j = 1;4 * j < n - i;j++){
			t2 = j;
			if((n - i - 4 * j) % 3 != 0){
				continue;
			}
			t1 = (n - i - 4 * j) / 3;
			if(t1 + t2 + t3 == m && t1 != 0){
				cout << t1 << " " << t2 << " " << t3 << endl;
			}
		}
	}

	return 0;
}

