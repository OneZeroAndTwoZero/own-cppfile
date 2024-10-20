#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int t1,t2,t3;
	for(int i = 1;3 * i < n;i++){
		t1 = i;
		for(int j = 1;4 * j < n - 3 * i;j++){
			t2 = j;
//			if((n - 3 * i - 4 * j) % 5 != 0){
//				continue;
//			}
			t3 = (n - 3 * i - 4 * j) * 7;
			if(t1 + t2 + t3 == m){
				cout << t1 << " " << t2 << " " << t3 << endl;
			}
		}
	}

	return 0;
}

