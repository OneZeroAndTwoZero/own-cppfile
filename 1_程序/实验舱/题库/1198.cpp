#include<bits/stdc++.h>
using namespace std;

int main(){
	int x1,x2,y1,y2;
	cin >> x1 >> y1;
	cin >> x2 >>y2;
	int n;
	cin >> n;
	int d12 = 0,d22 = 0;
	while(n --){
		int x,y;
		cin >> x >> y;
		int t1 = (x - x1) * (x - x1) + (y - y1) * (y - y1);
		int t2 = (x - x2) * (x - x2) + (y - y2) * (y - y2);
		if(t1 > t2){
			d22 = max(d22,t2);
		}else{
			d12 = max(d12,t1);
		}
	}
	cout << d12 + d22 << endl;

	return 0;
}

