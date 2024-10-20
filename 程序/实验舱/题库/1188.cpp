#include<bits/stdc++.h>
using namespace std;

int main(){
	int j = 0,o = 0;
	int tem;
	while(cin >> tem){
		if(tem % 2 == 0){
			o ++;
		}else{
			j ++;
		}
	}
	double j_z = (double)j / (j + o),o_z = (double)o / (j + o);
	printf("%.2lf%%\n",100.0*j_z);
	printf("%.2lf%%\n",100.0*o_z);

	return 0;
}

