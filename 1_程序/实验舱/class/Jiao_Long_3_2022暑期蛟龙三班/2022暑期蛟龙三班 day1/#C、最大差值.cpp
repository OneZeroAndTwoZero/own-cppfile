#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[1005][1005] = {0};

int main(){
    cin >> n >> m;
    int max = 0,min = 0;
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

