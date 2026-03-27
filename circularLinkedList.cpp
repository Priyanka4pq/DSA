#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class CircularList{
    Node* head;
    Node* tail;

    public:
    CircularList(){
        head = tail = NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            tail->next = head;
        }else{
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            tail->next = head;
        }else{
            tail->next = newNode;
            tail = newNode;
            tail->next = head;
        }
    }

    void print(){
        if(head == NULL) return;

        cout<<head->data<<"->";
        Node* temp = head->next;

        while(temp != head){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<temp->data;
    }

};
int main() {
    CircularList cll;
    cll.push_front(1);
    cll.push_front(2);
    cll.push_front(3);
    cll.push_back(4);
    cll.push_back(5);
    cll.print();
    return 0;
}