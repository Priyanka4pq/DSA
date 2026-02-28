#include <bits/stdc++.h>
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
class List
{
    Node* head;
    Node* tail;
    public:
        List(){
            head = tail = NULL;
        }

        void push_front(int val){
            Node* newNode = new Node(val);  //dynamic
            if(head == NULL){
                head = tail = newNode;
                return;
            }else{
                newNode->next = head;
                head = newNode;
            }
        }

        void push_back(int val){
            Node* newNode = new Node(val); 
            if(head == NULL){
                head = tail = newNode;
            }else{
                tail->next = newNode;
                tail = newNode;
            }
        }

        void pop_front(){
            if(head == NULL){
                cout<<"there is no node\n";
                return;
            }else{
                Node* temp = head;
                head = head->next;
                temp->next = NULL;
                delete temp;
            }
        }

        void pop_back(){
            if(head == NULL){
                cout<<"there is no node\n";
                return;
            }else{
                Node* temp = head;
                while(temp->next->next != NULL){
                    temp = temp->next;
                }
                Node* del = temp->next;
                temp->next = NULL;
                delete del;
            }
        }
        void printll(){
            Node* temp = head;
            while(temp != NULL){
                cout<< temp->data <<"->";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
        }
};
int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);

    ll.printll();
    ll.pop_front();
    ll.printll();
    ll.pop_back();
    ll.printll();
    return 0;
}