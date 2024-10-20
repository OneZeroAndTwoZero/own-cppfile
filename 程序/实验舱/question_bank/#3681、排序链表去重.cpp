// #include<bits/stdc++.h>
// using namespace std;

// struct ListNode{
//     int val;
//     ListNode *next;
//     ListNode() : val(0),next(nullptr){}
//     ListNode(int x) : val(x),next(nullptr){}
//     ListNode(int x,ListNode *next) : val(x),next(next){}
// };

// int a[1005] = {1,1,1,1,1,1,1,1,1,3,3,3,3};

ListNode *delDup(ListNode *head){
    if(head == nullptr) return head;
    ListNode *l = head;
    ListNode *r = l->next;
    while(r != nullptr){
        if(l->val == r->val){
            l->next = r->next;
        }else{
            l = l->next;
        }
        r = r->next;
    }
    return head;
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
//     ListNode *p = head;
//     for(int i = 0;i < 12;i ++){
//         addnode(p,a[i]);
//         p = p->next;
//     }
//     head = delDup(head);
//     while(head != nullptr){
//         printf("%d ",head->val);
//         head = head->next;
//     }

//     return 0;
// }