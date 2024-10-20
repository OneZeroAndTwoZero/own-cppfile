#include <stdio.h>
int f(int x);//ÉùÃ÷ 
int main()
{
    int x, y;
    scanf("%d",&x);
    printf("%d",f(x));
    return 0;
}
int f(int x){
	int y;
	if(x<1) y=x;
    else if(x<10) y=2*x-1;
    else y=3*x-11;
    return y;
}

