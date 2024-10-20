#include<bits/stdc++.h>
using namespace std;

int r, g, b;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in", "r", stdin);
    freopen("../data.out", "w", stdout);
#endif

    scanf("%d %d %d", &r, &g, &b);
    if (r > g && r > b){
        printf("red\n");
    }else if (g > r && g > b){
        printf("green\n");
    }else if (b > r && b > g){
        printf("blue\n");
    }else if (r == g && r > b){
        printf("yellow\n");
    }else if (r == b && r > g){
        printf("purple\n");
    }else if (b == g && b > r){
        printf("cyan\n");
    }else if (r >= 200){
        printf("white\n");
    }else if (r <= 50){
        printf("black\n");
    }else{
        printf("grey\n");
    }

    return 0;
}
