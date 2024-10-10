#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int d){
        data = d;
        next = nullptr;
    }
};

void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ->";
        current = current->next;
    }
    cout << "nullptr" << endl;
}
Node* OddEvenLL(Node* head){
    vector<int>arr;
    Node* temp = head;
    while(temp != nullptr){
        arr.push_back(temp->data);
        if(temp -> next!= nullptr)
        temp = temp->next->next;
    }
    temp = head -> next;
    while(temp != nullptr){
        arr.push_back(temp->data);
        if(temp->next != nullptr){
           temp = temp-> next->next;
        }
    }
    head = new Node(arr[0]);
    temp = head;
    for(int i = 1; i<arr.size(); i++){
        temp -> next = new Node(arr[i]);
        temp = temp -> next;
    }
    
    return head;
}

int main() {
    Node* head = new Node(2);
    head->next = new Node(1);
    head->next->next = new Node(3);
    head->next->next->next = new Node(5);
    head->next->next->next->next = new Node(6);
    head->next->next->next->next->next = new Node(4);
    head->next->next->next->next->next->next = new Node(7);

    cout << "Linked list: ";
    printList(head);
    head = OddEvenLL(head);
    printList(head);
    return 0;
}
