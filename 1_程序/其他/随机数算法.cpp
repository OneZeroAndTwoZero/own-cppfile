#include<bits/stdc++.h>
using namespace std;

int sum = 10000,num = 0;

int main(){
	srand(time(NULL));
	for(int i = 0;i < sum;i++){
		if(rand() % 3 > 0) num ++;
	}
	printf("%.5lf",(double)num / sum);

	return 0;
}

