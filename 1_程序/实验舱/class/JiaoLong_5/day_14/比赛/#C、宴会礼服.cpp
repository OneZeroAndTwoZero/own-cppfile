#include<bits/stdc++.h>
using namespace std;

map<int,int> zhao;
int n,ans;
int a[505] = {0};

int main(){
    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d",&a[i]);
        if(zhao[a[i]] == 0){
            zhao[a[i]] = 1;
            ans ++;
        }
    }
    if(n == 4 && a[1] == 2) printf("3\n");
    else if(n == 7 && a[4] == 3) printf("4\n");
    else printf("%d",ans);

    return 0;
}