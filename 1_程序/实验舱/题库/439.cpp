#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,point,max = -1,real = 0;
	cin >> n;
	double sum = 0;
	for(int i = 0;i < n;i++){
		cin >> point;
		if(point != 0){
			real ++;
			sum += point;
			if(point > max){
				max = point;
			}
		}
	}
	sum = sum / (double)real;
	printf("%.2lf %d",sum,max);

	return 0;
}

