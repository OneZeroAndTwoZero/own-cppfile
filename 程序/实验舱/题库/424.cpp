#include<bits/stdc++.h>
using namespace std;

int main(){
	int i = 2;
	int x,y;
	cin >> x;
	y = 2 * x + 1;
	for(int j = 1;j <= 15;j++){
		printf("(%d,%d) ",x,y);
		if(j % 5 == 0) printf("\n");
		x += i;
		y = 2 * x + 1;
		i += 2;
	}
	

	return 0;
}

