#include<bits/stdc++.h>
using namespace std;

int a[105][105] = {0};

int main(){
	int m,n;
	cin >> m >> n;
	int zs = m * n;
	for(int i = 0;i < m;i++){
		for(int j = 0;j < n;j++){
			cin >> a[i][j];
		}
	}
	int sl = 0;
	for(int i = 0;i < m;i++){
		for(int j = 0;j < n;j++){
			int tem;
			cin >> tem;
			if(tem == a[i][j]){
				sl++;
			}
		}
	}
	double bl = (double)sl * 100 / (double)zs;
	printf("%.2lf\n",bl);

	return 0;
}

