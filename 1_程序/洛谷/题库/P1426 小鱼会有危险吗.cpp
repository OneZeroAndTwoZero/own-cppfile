#include<bits/stdc++.h>
using namespace std;

double sum = 0,now = 7,s,x;
bool ans = 1;

int main(){
	scanf("%lf %lf",&s,&x);
	while(1){
		if(sum > s + x) break;
		if(sum >= s - x){
			sum += now;
			if(sum <= s + x){
				ans = 0;
			}
			break;
		}
		now *= 0.98;
		sum += now;
	}
	printf("%c\n",ans ? 'n' : 'y');

	return 0;
}

