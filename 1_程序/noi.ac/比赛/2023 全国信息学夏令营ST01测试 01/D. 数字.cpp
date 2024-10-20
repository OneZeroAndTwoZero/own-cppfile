#include<bits/stdc++.h>
using namespace std;

char a[1005];

bool cmp(char a,char b){
	return a > b;
}

int main(){
//#ifndef ONLINE_JUDGE
//    freopen("data.in","r",stdin);
//    freopen("data.out","w",stdout);
//#endif
	
	scanf("%s",&a);
	sort(a,a + strlen(a),cmp);
	printf("%s ",a);
	sort(a,a + strlen(a));
	if(a[0] == '0'){
		int p = 1;
		while(p < strlen(a) && a[p] == '0'){
			p ++;
		}
		swap(a[0],a[p]);
	}
	printf("%s\n",a);

	return 0;
}

