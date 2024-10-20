#include<bits/stdc++.h>
using namespace std;

int yu,z = 0,c = 0,p_y = 0;

int main(){
    for(int i = 1;i <= 12;i++){
    	z += 300;
    	cin >> yu;
    	z -= yu;
    	if(z < 0){
    		p_y = i;
    		break;
		}
		if(z / 100 != 0){
			c += z / 100 * 100;
			z -= z / 100 * 100;
		}
	}
	if(p_y == 0){
		cout << c * 1.2 + z << endl;
	}else{
		cout << "-" << p_y << endl;
	}
	
	return 0;
}
