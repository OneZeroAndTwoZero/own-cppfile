#include<bits/stdc++.h>
using namespace std;

bool a[105][105] = {0};
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};

int zhao(int i,int j,int w,int h){
	int you = 1;
	a[i][j] = 0;
	for(int k = 0;k < 4;k++){
		int si = i + dir[k][0],sj = j + dir[k][1];
		if(si >= 0 && si < w && sj >= 0 && sj < h){
			if(a[si][sj] == 1){
				you += zhao(si,sj,w,h);
			}
	    }
	}
	return you;
}

int main(){
	int w,h;
	while(cin >> w >> h){
		
		if(!w && !h) return 0;
		int si,sj;
		for(int i = 0;i < w;i++){
			for(int j = 0;j < h;j++){
				char t;
				cin >> t;
				if(t == '.'){
					a[i][j] = 1;
				}else{
					if(t == '@'){
						si = i,sj = j;
					}
					a[i][j] = 0;
				}
			}
		}
		cout << zhao(si,sj,w,h) << endl;
	} 

	return 0;
}

