#include<bits/stdc++.h>
#define __len(x) (((1LL << (int)(3.3 * x + 1)) + 15))
using namespace std;

vector<int> row[15],col[15],box[15];
int T,t;

int turn(int x,int y){
    return ((x / 3) * 3) + (y / 3);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("%d",&T);
    while(T --){
        for(int i = 0;i <= 10;i ++){
            row[i].clear(),col[i].clear(),box[i].clear();
        }
        for(int i = 0;i < 9;i ++){
            for(int j = 0;j < 9;j ++){
                scanf("%d",&t);
                t --;
                row[i].push_back(t);
                col[j].push_back(t);
                box[turn(i,j)].push_back(t);
            }
        }
        for(int i = 0;i < 9;i ++){
            sort(row[i].begin(),row[i].end());
            sort(col[i].begin(),col[i].end());
            sort(box[i].begin(),box[i].end());
        }
        bool temp = 1;
        for(int i = 0;i < 9;i ++){
            for(int j = 0;j < 9;j ++){
                // cout << i << " " << j << " " << temp << "[]\n";
                // cout << row[i][j] << ' ' << col[i][j] << " " << box[i][j] << ";;;\n";
                temp &= (row[i][j] == j);
                temp &= (col[i][j] == j);
                temp &= (box[i][j] == j);
                // cout << temp << "jj\n";
            }
        }
        if(temp) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}