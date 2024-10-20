// #include<bits/stdc++.h>
// using namespace std;

// struct ListNode{
//     int val;
//     ListNode *next;
//     ListNode() : val(0),next(nullptr){}
//     ListNode(int x) : val(x),next(nullptr){}
//     ListNode(int x,ListNode *next) : val(x),next(next){}
// };

bool hasCycle(ListNode *head){
    ListNode *p = head;
    while(p != nullptr){
        if(p->val == 1000000001) return true;
        p->val = 1000000001;
        p = p->next;
    }
    return false;
}

// void addnode(ListNode *p,int i) {
//     ListNode *node = new ListNode;
//     node->val = i;
//     p->next = node;
// }

// int main(){
// #ifndef ONLINE_JUDGE
//     freopen("../data.in","r",stdin);
//     freopen("../data.out","w",stdout);
// #endif
//     ios::sync_with_stdio(0);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     ListNode f = ListNode(1);
//     ListNode *head = &f;
//     // head->next = head;
//     ListNode *p = head;
//     printf("%d\n",hasCycle(head));

//     return 0;
// }