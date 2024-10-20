#include<bits/stdc++.h>
using namespace std;

int main(){
	int R,Y;
	double M;
	cin >> R >> M >> Y;
	for(int i = 1;i <= Y;i++){
		M = (1 + (double)(R / 100.0))*M;
	}
	int m = M;
	printf("%d",m);

	return 0;
}

