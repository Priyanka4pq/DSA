#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }
    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void createCycle(int pos)
    {
        if (pos <= -1)
            return;
        Node *temp = head;
        Node *cycleNode = NULL;
        int index = 0;
        while(temp->next != NULL){
            if(pos == index){
                cycleNode = temp;
            }
            temp = temp->next;
            index++;
        }
        if(cycleNode){
            temp->next = cycleNode;
        }
    }

    Node *detectCycle(){
        Node* slow = head;
        Node* fast = head;
        int cycle = false;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                cycle = true;
                break;
            }
        }
        if(!cycle){
            return NULL;
        }
        slow = head;
        while(slow!= fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
    void printll()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    List ll;
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ll.push_back(x);
    }
    ll.printll();

    int pos;
    cout << "Enter cycle position : ";
    cin >> pos;

    ll.createCycle(pos);
    Node* result = ll.detectCycle();
    if(result){
        cout<<"cycle start at node with value: "<<result->data<<endl;
    }else{
        cout<<"No cycle Detected"<<endl;
    }

    return 0;
}
