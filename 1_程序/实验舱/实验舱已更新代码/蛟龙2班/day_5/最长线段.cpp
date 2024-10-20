#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	int x1,y1,x2,y2;
	double max = -1;
	int max_i;
	for(int i = 1;i <= N;i++){
		cin >> x1 >> y1 >> x2 >> y2;
		double S = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
		if(S > max){
			max = S;
			max_i = i;
		}
	}
	cout << max_i << endl;
	printf("%.2lf\n",max);
	
	return 0;
}
