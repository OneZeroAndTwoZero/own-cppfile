#include<iostream>
#include<string>
using namespace std;

int max(int a,int b){
	int min = a;
	if(b < a) min = b;
	int max_ = 1;
	for(int i = 1;i <= min;i++){
		if(a % i == 0 && b % i == 0){
			max_ = i;
		}
	}
	return max_;
}

int main(){
	int x,y;
	while(cin >> x >> y){
		cout << max(x,y) << endl;
	}
	
	return 0;
}
