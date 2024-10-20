#include<bits/stdc++.h>
using namespace std;

double a[10000] = {0};

int main(){
	string s1,s2,s3;
	int i = 0;
	while(cin >> s1 >> s2 >> s3 >> a[i]){
		i++;
	}
	sort(a,a + 10000);
	for(int j = 0;j < 10000;j++){
		cout << a[9999 - j] << endl;
		if(j == 13){
			cout << "//////////////////////////" << endl;
		}
		if(a[9998 - j] == 0){
			cout << j + 1 << "//////////" << endl;
			return 0;
		}
	}

	return 0;
}

