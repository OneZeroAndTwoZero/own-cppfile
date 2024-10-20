#include<bits/stdc++.h>
using namespace std;

int n,m,w = 0,d = 0,x;
double v;

int main(){
    cin >> n >> m;
    while(n--){
    	cin >> x;
    	w += x;
    	d += abs(x);
	}
	v = (double)d / (double)m;
	printf("%d %.2lf",w,v);
	
	return 0;
}
