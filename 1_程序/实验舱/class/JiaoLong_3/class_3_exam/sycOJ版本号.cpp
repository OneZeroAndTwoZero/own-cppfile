#include<bits/stdc++.h>
using namespace std;

struct ban_b{
	int sl = 0;
    int c[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
};

//bool cmp(ban_b a,ban_b b){
//	if(a.c[0] != b.c[0]){
//		return a.c[0] < b.c[0];
//	}
//	if(a.c[1] != b.c[1]){
//		return a.c[1] < b.c[1];
//	}
//	if(a.c[2] != b.c[2]){
//		return a.c[2] < b.c[2];
//	}
//	if(a.c[3] != b.c[3]){
//		return a.c[3] < b.c[3];
//	}
//	if(a.c[4] != b.c[4]){
//		return a.c[4] < b.c[4];
//	}
//	if(a.c[5] != b.c[5]){
//		return a.c[5] < b.c[5];
//	}
//	if(a.c[6] != b.c[6]){
//		return a.c[6] < b.c[6];
//	}
//	if(a.c[7] != b.c[7]){
//		return a.c[7] < b.c[7];
//	}
//	if(a.c[8] != b.c[8]){
//		return a.c[8] < b.c[8];
//	}
//	if(a.c[9] != b.c[9]){
//		return a.c[9] < b.c[9];
//	}
//	return 1;
//}

ban_b a[102];

int main(){
	int n;
	cin >> n;
	getchar();
	getchar();
	for(int i = 0;i < n;i++){
		for(int j = 0;;j++){
			scanf("%d",&a[i].c[j]);
			a[i].sl ++;
			char tem;
			scanf("%c",&tem);
			if(tem == '\n') break;
		}
	}
	//sort(a,a + n);
	for(int i = 0;i < n;i++){
		for(int j = 0;j < a[i].sl - 1;j++){
			cout << a[i].c[j] << '.';
		}
		cout << a[i].c[a[i].sl - 1] << endl;
	}
	
	return 0;
} 
