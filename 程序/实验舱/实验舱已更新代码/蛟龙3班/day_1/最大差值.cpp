#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int a[n][m] = {0},max = 0,min = 0;
    for(int i = 0;i < n;i++){
    	int max_ = -1;
    	for(int j = 0;j < m;j++){
    		cin >> a[i][j];
    		if(a[i][j] > max_) max_ = a[i][j];
		}
		max += max_;
	}
	for(int i = 0;i < m;i++){
		int min_ = 0x3f3f3f3f;
		for(int j = 0;j < n;j++){
			if(a[j][i] < min_) min_ = a[j][i];
		}
		min += min_;
	}
	cout << max - min << endl;
	return 0;
}

