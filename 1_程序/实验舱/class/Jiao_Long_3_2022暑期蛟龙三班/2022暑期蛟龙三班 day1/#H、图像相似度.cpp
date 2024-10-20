#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[101][101],b[101][101];

int main(){
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> a[i][j];
		}
	}
	int z = n * m,now = 0;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> b[i][j];
			if(!(b[i][j] ^ a[i][j])){
				now ++;
			}
		}
	}
	double bl = (double)now / z;
	printf("%.2lf",bl * 100);

	return 0;
}

