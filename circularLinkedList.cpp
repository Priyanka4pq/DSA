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
    void pop_front(){
         if(head == NULL){
            cout<<"LL is empty"<<endl;
        }else if(head == tail){
            delete head;
            return;
        }else{
            Node* temp = head;
            head = head->next;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
    }

    void pop_back(){
         if(head == NULL){
            cout<<"LL is empty"<<endl;
        }else if(head == tail){
            delete head;
            return;
        }else{
            Node* temp = tail;
           while(temp->next != tail){
            temp = temp->next;
        }

        // temp is now previous of tail
        delete tail;
        tail = temp;
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
        cout<<temp->data<<endl;
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
    cll.pop_front();
    cll.print();
    cll.pop_back();
    cll.print();
    return 0;
}