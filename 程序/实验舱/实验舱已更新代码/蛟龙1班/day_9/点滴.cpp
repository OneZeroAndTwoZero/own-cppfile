#include<bits/stdc++.h>
using namespace std;

int main(){
	int V,D;
	cin >> V >> D;
	int num = 1;
	int di_le = 0;
	int time = 0;
	int c = ceil((double)V / D);
	for(int i = 1;i <= c;i++){
		time += 1;
		di_le += 1;
		if(di_le >= num){
			num += 1;
			di_le = 0;
			if(i != c){
				time += 1;
			}
		}
	}
	cout << time << endl;
	
	return 0;
} 
