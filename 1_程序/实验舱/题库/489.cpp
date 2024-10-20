#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	cout << "   ";
	for(int i = 1;i <= n;i++){
		printf("%d       ",i);
	}
	cout << endl;
	for(int i = 1;i <= n;i++){
		printf("%d  ",i);
		for(int j = 1;j <= i;j++){
			printf("%d*%d=%-3d ",j,i,j * i);
		}
		cout << endl;
	}

	return 0;
}

