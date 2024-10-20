#include<bits/stdc++.h>
using namespace std;

int n,ans = 0;
char a[105][105];
vector<int> posx,posy;

bool check(int i,int j,int p){
    double k,b;
    double x1 = posx[i],y1 = posy[i];
    double x2 = posx[j],y2 = posy[j];
    if(x1 == x2){
        if(x1 == posx[p]) return 1;
        return 0;
    }
    k = (y1 - y2) / (x1 - x2);
    b = y1 - (x1 * k);
    double check = k * posx[p] + b;
    // cout << k << " " << b << " " << check << " " << posy[p] << "[]\n";
    if(fabs(check - posy[p]) > 0.00001) return 0;
    // cout << a[posx[i]][posy[i]] << " " << a[posx[j]][posy[j]] << " " << a[posx[p]][posy[p]] << ";\n";
    return 1;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%s",a[i]);
        for(int j = 0;j < n;j ++){
            if(a[i][j] == '.') continue;
            posx.push_back(i),posy.push_back(j);
        }
    }
    for(int i = 0;i < posx.size();i ++){
        for(int j = i + 1;j < posx.size();j ++){
            for(int k = j + 1;k < posx.size();k ++){
                if(check(i,j,k)) ans ++;
            }
        }
    }
    printf("%d\n",ans);

	return 0;
}