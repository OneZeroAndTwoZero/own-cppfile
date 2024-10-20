#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int y1,y2,now = 0,max = -1;
	for(int i = 0;i < n;i++){
		cin >> y1 >> y2;
		if((y1 >= 90 & y1 <= 140) && (y2 >= 60 && y2 <= 90)){
			now ++;
		}else{
			if(now > max) max = now;
			now = 0;
		}
	}
	if(now > max) max = now;
	cout << max << endl;

	return 0;
}

