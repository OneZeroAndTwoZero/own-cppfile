#include<bits/stdc++.h>
using namespace std;

int n,id;
string op;
set<int> zhao;

int main(){
	scanf("%d",&n);
	for(int i = 1;i < 100005;i++) zhao.insert(i);
	for(int i = 0;i < n;i++){
		cin >> op;
		if(op == "New"){
			id = *zhao.begin();
			printf("%d\n",id);
			zhao.erase(zhao.begin());
		}else{
			scanf("%d",&id);
			if(*zhao.find(id) != id){
				printf("Successful\n");
				zhao.insert(id);
			}else{
				printf("Failed\n");
			}
		}
	}

	return 0;
}

