#include<bits/stdc++.h>
using namespace std;

struct wang{
	int t1,t2,t3,t4;
};

int main(){
	wang key,check;
	scanf("%d.%d.%d.%d",&check.t1,&check.t2,&check.t3,&check.t4);
	scanf("%d.%d.%d.%d",&key.t1,&key.t2,&key.t3,&key.t4);
	check.t1 = check.t1 & key.t1;
	check.t2 = check.t2 & key.t2;
	check.t3 = check.t3 & key.t3;
	check.t4 = check.t4 & key.t4;
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		wang tem;
		scanf("%d.%d.%d.%d",&tem.t1,&tem.t2,&tem.t3,&tem.t4);
		tem.t1 = tem.t1 & key.t1;
		tem.t2 = tem.t2 & key.t2;
		tem.t3 = tem.t3 & key.t3;
		tem.t4 = tem.t4 & key.t4;
		if(tem.t1 == check.t1 && tem.t2 == check.t2 && tem.t3 == check.t3 && tem.t4 == check.t4){
			cout << "INNER" << endl;
		}else{
			cout << "OUTER" <<endl;
		}
	}

	return 0;
}

