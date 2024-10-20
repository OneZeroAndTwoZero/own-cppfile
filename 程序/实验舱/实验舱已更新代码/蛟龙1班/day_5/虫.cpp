#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int w = 0,d = 0;
    int x;
    while(n--){
    	cin >> x;
    	w += x;
    	d += abs(x);
	}
	double v = (double)d / (double)m;
	printf("%d %.2lf",w,v);
	
	return 0;
}
