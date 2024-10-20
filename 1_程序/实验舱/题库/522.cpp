#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int j,y,t;
	int j_s = 0,y_s = 0,t_s = 0;
	int sum = 0;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> j >> y >> t;
		j_s += j,y_s += y,t_s += t;
	}
	sum = j_s + y_s + t_s;
	printf("%d %d %d %d",j_s,y_s,t_s,sum);

	return 0;
}

