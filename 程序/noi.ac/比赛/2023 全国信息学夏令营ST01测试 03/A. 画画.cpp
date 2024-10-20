#include<bits/stdc++.h>
using namespace std;

int h,w,ok;
char c;

int main(){
// #ifndef ONLINE_JUDGE
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif

    scanf("%d %d %c %d",&h,&w,&c,&ok);
    for(int i = 0;i < w;i ++){
        printf("%c",c);
    }
    printf("\n");
    for(int i = 1;i < h - 1;i ++){
        if(ok == 1){
            for(int j = 0;j < w;j ++){
                printf("%c",c);
            }
        }else{
            printf("%c",c);
            for(int j = 1;j < w - 1;j ++){
                printf(" ");
            }
            printf("%c",c);
        }
        printf("\n");
    }
    for(int i = 0;i < w;i ++){
        printf("%c",c);
    }
    printf("\n");

	return 0;
}
