#include<bits/stdc++.h>
using namespace std;

void A(){
	char a = getchar();
	if(a == '\n') return;
	A();
	cout << a;
}

int main(){
	A();

	return 0;
}


