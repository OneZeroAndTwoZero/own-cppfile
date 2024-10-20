#include<bits/stdc++.h>
using namespace std;

map<int,string> lm;
int a[4] = {0};

int main(){
	int n;
	cin >> n;
	lm[1] = "I",lm[2] =  "II",lm[3] = "III",lm[4] =  "IV",lm[5] =  "V",lm[6] =  "VI",lm[7] =  "VII",lm[8] =  "VIII",lm[9] =  "IX";
	lm[10] = "X",lm[20] = "XX",lm[30] = "XXX",lm[40] = "XL",lm[50] = "L",lm[60] = "LX",lm[70] = "LXX",lm[80] = "LXXX",lm[90] = "XC";
    lm[100] = "C",lm[200] = "CC",lm[300] = "CCC",lm[400] = "CD",lm[500] = "D",lm[600] = "DC",lm[700] = "DCC",lm[800] = "DCCC",lm[900] = "CM";
    lm[1000] = "M",lm[2000] = "MM",lm[3000] = "MMM";
    for(int i = 0;i < n;i++){
    	int t;
    	cin >> t;
    	for(int i = 0;i < 4;i++){
    		a[4 - i - 1] = t % 10 * pow(10,i);
    		t /= 10;
		}
		for(int i = 0;i < 4;i++){
			if(a[i]){
				cout << lm[a[i]];
			}
		}
		cout << endl;
	}

	return 0;
}

