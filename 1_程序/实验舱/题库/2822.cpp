#include<bits/stdc++.h>
using namespace std;

int main(){
	int sum = 0;
	int x,y;
	cin >> x >> y;
	int next,now = x;
	int quan = 1;
	int fx = 1;
	while(now != y){
		next = x + quan * fx;
		cout << next << "/" << endl;
		for(int i = now;;i += fx){
			now += fx;
			cout << now << "*" << endl;
			sum ++;
			if(now == y){
				cout << sum << endl;
				return 0;
			}
			if(now == next){
				break;
			}
		}
		fx *= -1;
		quan *= 2; 
	}

	return 0;
}

