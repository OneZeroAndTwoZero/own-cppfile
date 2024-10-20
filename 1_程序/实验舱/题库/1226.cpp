#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			int tem;
			cin >> tem;
			if(tem != 0){
				cout << i + 1 << " " << j + 1 << " " << tem << endl;
			}
		}
	}

	return 0;
}

