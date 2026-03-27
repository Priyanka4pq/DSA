#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int val){
           data = val; //kisi bhi nide ke liye data aata hai toh hm us node main assign kr denge
           next = prev = NULL;
        }
};

class DoublyList {
    Node* head;
    Node* tail;
    public:
    DoublyList(){
        head = tail = NULL;
    }
    
    void push_front(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode;
            }else{
                head->prev = newNode;
                newNode->next = head;
                head = newNode;
            }
        }

        void push_back(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode;
            }else{
                newNode->prev = tail;
                tail->next = newNode;
                tail = newNode;
            }
        }

        void pop_front(){
            if(head == NULL){
                cout<<"Linked List is empty"<<endl;
            }else{
                Node* temp = head;
                head = head->next;
                if( head->prev != NULL){
                    head->prev = NULL;
                }
                 temp->next = NULL;
                 delete temp;
            }
        }

        void pop_back(){
            if(head == NULL){
                cout<<"Linked List is empty"<<endl;
                return;
            }
            if(head == tail){
                delete head;
                head = tail = NULL;
                return;
            }
            Node* temp = tail;
            tail = tail->prev;
            tail->next = NULL;
            delete temp;
        }

        void print(){
            Node* temp = head;
            while(temp!= NULL){
                cout<< temp->data <<"<->";
                temp= temp->next;
            }
            cout<<"NULL\n";
        }

};
int main(){
    DoublyList dll;
    // dll.push_front(1);
    // dll.push_front(2);
    // dll.push_front(3);
    dll.push_back(1);
    dll.push_back(2);
    dll.push_back(3);
    dll.print();
    dll.pop_front();

    dll.print();
    dll.pop_back();
    dll.print();
    return 0;
}