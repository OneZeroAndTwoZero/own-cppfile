#include<bits/stdc++.h>
using namespace std;

int n,m;

int main(){
//#ifndef ONLINE_JUDGE
//    freopen("data.in","r",stdin);
//    freopen("data.out","w",stdout);
//#endif

	scanf("%d %d",&n,&m);
	printf("����");
	for(int i = 0;i < m - 1;i ++) printf("�Щ�");
	printf("��\n");
	for(int i = 0;i < m;i ++) printf("�� ");
	printf("��\n");
	for(int i = 0;i < n - 1;i ++){
		printf("����");
		for(int j = 0;j < m - 1;j ++){
			printf("�੤");
		}
		printf("��\n");	
		for(int j = 0;j < m;j ++) printf("�� ");
		printf("��\n");
	}
	printf("����");
	for(int i = 0;i < m - 1;i ++) printf("�ة�");
	printf("��\n");

	return 0;
}

