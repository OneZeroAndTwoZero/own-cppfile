#include<bits/stdc++.h>
using namespace std;

int main(){
	int x;
	cin >> x;
	int k = 0;
	double zx = 100000000;
	for(int i = x - 7;i <= x + 7;i += 1){
		printf("(%d,%d) ",i,2 *i);
		if(k == 4){
		    cout << endl;
			k = 0;
		}
		else k ++;
		double d = fabs((double)(-1 * i + 1) / sqrt(2));
		if(d < zx) zx = d;
	}
	printf("%.3lf\n",zx);

	return 0;
}

