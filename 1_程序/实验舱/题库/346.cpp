#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = n;i > 0;i--){
		for(int j = i;j <= n;j++){
			printf("%d*%d=%-2d ",i,j,i * j);
		}
		cout << endl;
	}

	return 0;
}

