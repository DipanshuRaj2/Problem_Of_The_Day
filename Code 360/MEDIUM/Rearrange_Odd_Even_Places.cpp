#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = nullptr;
    }
};
// Node *oddEvenList(Node *head)
// {
//     Node *t1 = head;
//     vector<int>arr;
//     while((t1 != nullptr)&&(t1  -> next!= nullptr)){
//         arr.push_back(t1->data);
//         t1 = t1 -> next -> next;
//     }
//     if(t1!= nullptr){
//         arr.push_back(t1->data);
//     }
//     t1 = head->next;
//     while(t1 != nullptr && t1 -> next != nullptr){
//         arr.push_back(t1->data);
//         t1 = t1 -> next -> next;
//     }
//      if(t1 != nullptr){
//         arr.push_back(t1->data);
//     }
//     t1 = head;
//     int i = 0;
//     while(t1 != nullptr){
//         t1 -> data = arr[i];
//         t1 = t1 -> next;
//         i++;
//     }
   
//     return head;
// }.
Node *oddEvenList(Node* head){
    Node* odd = head;
    Node* even = head -> next;
    Node* join = head -> next;

     while(even != nullptr && even -> next != nullptr){
        odd -> next = odd -> next -> next;
        even -> next = even -> next -> next;
        odd = odd -> next;
        even = even -> next;
    }
    odd -> next = join;
    return head;
    
}
void print(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ->";
        head = head->next;
    }
    cout << "nullptr";
    cout << endl;
}
int main()
{
    // 2 4 6 8 10
    Node *head = new Node(2);
    head->next = new Node(4);
    head->next->next = new Node(6);
    head->next->next->next = new Node(8);
    head->next->next->next->next = new Node(10);
    // head -> next ->next -> next ->next -> next = new Node(81);
    print(head);
    head = oddEvenList(head);
    print(head);
    return 0;
}