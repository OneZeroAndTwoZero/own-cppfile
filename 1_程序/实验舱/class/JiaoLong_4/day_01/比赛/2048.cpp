#include<bits/stdc++.h>
using namespace std;

int a[4][4] = {0};
bool ok[4][4] = {0};

int main(){
	for(int i = 0;i < 4;i++){
		for(int j = 0;j < 4;j++){
			cin >> a[i][j];
		}
	}
	int d;
	cin >> d;
	if(d == 0){
		for(int i = 0;i < 4;i++){
			for(int j = 2;j >= 0;j--){
				if(a[i][j]){
					int si = i,sj = j + 1;
					while(a[si][sj] == 0 && sj <= 3){
						sj ++;
					}
					if(sj > 3){
						sj = 3;
						a[si][sj] = a[i][j];
						a[i][j] = 0;
					}else{
						if(a[si][sj] == a[i][j] && ok[si][sj] == 0){
							a[si][sj] *= 2;
							a[i][j] = 0;
							ok[si][sj] = 1;
						}else{
							if(a[si][sj - 1] == 0){
								a[si][sj - 1] = a[i][j];
								a[i][j] = 0;
						    }
						}
					}
			    }
			}
		}
	}else if(d == 1){
		for(int j = 0;j < 4;j++){
			for(int i = 2;i >= 0;i--){
				if(a[i][j]){
					int si = i + 1,sj = j;
					while(a[si][sj] == 0 && si <= 3){
						si ++;
					}
					if(si > 3){
						si = 3;
						a[si][sj] = a[i][j];
						a[i][j] = 0;
					}else{
						if(a[si][sj] == a[i][j] && ok[si][sj] == 0){
							a[si][sj] *= 2;
							a[i][j] = 0;
							ok[si][sj] = 1;
						}else{
							if(a[si - 1][sj] == 0){
								a[si - 1][sj] = a[i][j];
								a[i][j] = 0;
						    }
						}
					}
			    }
			}
		}
	}else if(d == 2){
		for(int i = 0;i < 4;i++){
			for(int j = 1;j < 4;j++){
				if(a[i][j]){
					int si = i,sj = j - 1;
					while(a[si][sj] == 0 && sj >= 0){
						sj --;
					}
					if(sj < 0){
						sj = 0;
						a[si][sj] = a[i][j];
						a[i][j] = 0;
					}else{
						if(a[si][sj] == a[i][j] && ok[si][sj] == 0){
							a[si][sj] *= 2;
							a[i][j] = 0;
							ok[si][sj] = 1;
						}else{
							if(a[si][sj + 1] == 0){
								a[si][sj + 1] = a[i][j];
								a[i][j] = 0;
						    }
						}
					}
			    }
			}
		}
	}else{
		for(int j = 0;j < 4;j++){
			for(int i = 1;i < 4;i++){
				if(a[i][j]){
					int si = i - 1,sj = j;
					while(a[si][sj] == 0 && si >= 0){
						si --;
					}
					if(si < 0){
						si = 0;
						a[si][sj] = a[i][j];
						a[i][j] = 0;
					}else{
						if(a[si][sj] == a[i][j] && ok[si][sj] == 0){
							a[si][sj] *= 2;
							a[i][j] = 0;
							ok[si][sj] = 1;
						}else{
							if(a[si + 1][sj] == 0){
								a[si + 1][sj] = a[i][j];
								a[i][j] = 0;
						    }
						}
					}
			    }
			}
		}
	}
	for(int i = 0;i < 4;i++){
		for(int j = 0;j < 4;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

