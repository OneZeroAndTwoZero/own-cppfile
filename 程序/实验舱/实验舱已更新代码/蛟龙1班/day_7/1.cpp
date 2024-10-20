#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    double z;
    double answer = 0;
    for(int i = 1;i <= n;i++){
    	z = 1.0 / (double)i;
    	answer += z;
	}
	printf("%.114514191lf",answer);
	
	return 0;
}
