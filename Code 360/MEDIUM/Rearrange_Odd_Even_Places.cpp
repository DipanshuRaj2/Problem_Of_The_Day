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
Node* oddEvenList(Node* head)
{
    if(head == nullptr){
        return head;
    }
    Node* temp = head;
    vector<int>arr;
    while(temp != nullptr){
        arr.push_back(temp -> data);
        temp = temp -> next;
    }
    vector<int>ans;
    for(int i = 0; i<arr.size(); i = i+2){
        ans.push_back(arr[i]);
    }
    for(int i = 1; i<arr.size(); i = i + 2){
        ans.push_back(arr[i]);
    }
    Node* newHead = new Node(ans[0]);
    Node* temp1 = newHead;
    for(int i = 1; i<ans.size(); i++){
        Node* mover = new Node(ans[i]);
        temp1 -> next = mover;
        temp1 = mover;
    }
    return newHead;
}
void print(Node* head){
    while(head != nullptr){
        cout<<head -> data<<" ->";
        head = head -> next;
    }
    cout<<"nullptr";
    cout<<endl;
}
int main()
{   
    //2 4 6 8 10
    Node* head = new Node(2);
    head -> next = new Node(4);
    head -> next ->next= new Node(6);
    head -> next ->next->next = new Node(8);
    head -> next ->next -> next ->next= new Node(10);
    // head -> next ->next -> next ->next -> next = new Node(81);
    print(head);
    head = oddEvenList(head);
    print(head);
    return 0;
}