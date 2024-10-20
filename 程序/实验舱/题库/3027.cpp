#include<bits/stdc++.h>
using namespace std;

int a[3] = {0};

int main(){
	char one,two,three;
	cin >> one >> two >> three;
	a[0] = one,a[1] = two,a[2] = three;
	sort(a,a + 3);
	cout << a[0] << " " << a[1] << " " << a[2] << endl;

	return 0;
}

