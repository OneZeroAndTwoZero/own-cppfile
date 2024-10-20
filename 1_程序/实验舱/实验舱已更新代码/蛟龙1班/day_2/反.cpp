#include<bits/stdc++.h>
using namespace std;

int main(){
	int num;
	cin >> num;
	int g,s,b;
	g = num%10;
	s = num/10%10;
	b = num/100%10;
	cout << g << s << b << endl;
	
	return 0;
}
