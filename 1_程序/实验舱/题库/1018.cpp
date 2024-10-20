#include<bits/stdc++.h>
using namespace std;

int a[50][50] = {0};

int main(){
	int n;
	cin >> n;
	int si = 0,sj = n / 2;
	int k = 1;
	while(k <= n * n){
		a[si][sj] = k ++;
		if(si == 0 && sj != n - 1){
			si = n - 1,sj += 1;
		}else if(sj == n - 1 && si != 0){
			sj = 0,si -= 1;
		}else if(si == 0 && sj == n - 1){
			si += 1;
		}else if(a[si - 1][sj + 1] != 0){
			si += 1;
		}else{
			si -= 1,sj += 1;
		}
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cout << a[i][j] <<" ";
		}
		cout <<endl;
	}

	return 0;
}

