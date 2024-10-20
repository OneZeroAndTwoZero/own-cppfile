#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		for(int j = 0;j <= i;j++){
			printf("%d*%d=%d ",j + 1,i + 1,(i + 1) * (j + 1));
		}
		cout << endl;
	}

	return 0;
}

