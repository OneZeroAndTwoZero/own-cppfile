#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	int num_x = 0,num_d = 0;
	for(int i = a;i <= b;i++){
		cout << i;
		if(i < 0){
			num_x ++;
		}else{
			num_d ++;
		}
	}
	cout << "\n";
	cout << num_d << endl << num_x << endl;
	
	return 0;
}
