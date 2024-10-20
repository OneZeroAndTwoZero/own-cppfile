#include<bits/stdc++.h>
using namespace std;

int n,m,jc;
double key,check,may;

int main(){
	scanf("%d %d",&n,&m);
	key = 3.0 / n;
	for(int i = 1;i <= m && i & 1;i++){
		for(int j = i + 1;j <= m && j & 1;j++){
			if((1.0 / i) + (1.0 / j) >= key) continue;
			check = key - ((1.0 / i) + (1.0 / j));
			may = 1.0 / check;
			cout << (double)(int)may << " [][][] " << may << endl;
			jc = min(abs((int)may - may),abs((int)(may + 1) - may)) == abs((int)may - may) ? (int)may : (int)(may + 1);
			if(abs(jc - may) <= 0.0000001 && jc <= m && jc & 1){
				cout << "po9yughilgtyujgf vyjmt" << endl;
				printf("%d %d %d\n",i,j,(int)may);
				return 0;
			}
		}
	}
	printf("No solution in 3 ~ %d.\n",m);

	return 0;
}

