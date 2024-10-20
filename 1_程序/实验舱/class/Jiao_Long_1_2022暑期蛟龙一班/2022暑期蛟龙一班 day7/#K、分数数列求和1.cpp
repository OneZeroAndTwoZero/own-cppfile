#include<bits/stdc++.h>
using namespace std;

int n;
double z,answer = 0;;

int main(){
    cin >> n;
    for(int i = 1;i <= n;i++){
    	z = 1.0 / (double)i;
    	answer += z;
	}
	printf("%.1lf",answer);
	
	return 0;
}
