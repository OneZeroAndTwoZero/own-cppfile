#include<bits/stdc++.h>
using namespace std;

class myqueue{
    private:
        int head = 0,tail = 1;
        int myqueue[200005];

    public:
        void push(int x){
            myqueue[tail ++] = x;
        }

        int front(){
            if(head == tail - 1) return -1;
            return myqueue[head + 1];
        }

        int back(){
            if(head == tail - 1) return -1;
            return myqueue[tail - 1];
        }

        int pop(){
            if(tail > head + 1){
                head ++;
                return 0;
            }else{
                return 1;
            }
        }

        int size(){
            return tail - head - 1;
        }
};

myqueue q;
int n,op,x;

int main(){
#ifndef ONLINE_JUDGE
    freopen("../data.in","r",stdin);
    freopen("../data.out","w",stdout);
#endif

    scanf("%d",&n);
    while(n --){
        scanf("%d",&op);
        if(op == 1){
            scanf("%d",&x);
            q.push(x);
        }else if(op == 2){
            if(q.pop()){
                printf("ERR_CANNOT_POP\n");
            }
        }else if(op == 3){
            if(q.front() == -1){
                printf("ERR_CANNOT_QUERY\n");
            }else{
                printf("%d\n",q.front());
            }
        }else{
            printf("%d\n",q.size());
        }
    }

	return 0;
}