#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	char s1[100005],s2[100005],s3[100005];
	scanf("%s.%s(%s)",&s1,&s2,&s3);
	if(strlen(s2) >= n){
		cout << s2[n];
		return 0;
	}
	cout << s1 << " " << s2 << " " << s3 << endl;
	n -= strlen(s2);
	n %= strlen(s3);
	cout << s3[n] << endl;

	return 0;
}

