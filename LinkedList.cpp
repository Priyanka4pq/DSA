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

    void push_front(int val)
    {
        Node *newNode = new Node(val); // dynamic 
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
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

    void pop_front()
    {
        if (head == NULL)
        {
            cout << "there is no node\n";
            return;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
    }

    void pop_back()
    {
        if (head == NULL)
        {
            cout << "there is no node\n";
            return;
        }
        else
        {
            // WHEN WE DON'T KNOW THE TAIL POINTER

            //  if(head->next == NULL){
            //     delete head;
            //     head = tail = NULL;
            //     return;
            // }

            // Node* temp = head;
            // while(temp->next->next != NULL){
            //     temp = temp->next;
            // }
            // Node* del = temp->next;
            // temp->next = NULL;
            // delete del;

            // WHEN WE KNOW THE TAIL POINTER
            if (head->next == NULL)
            {
                delete head;
                head = tail = NULL;
                return;
            }
            else
            {
                Node *temp = head;
                while (temp->next != tail)
                {
                    temp = temp->next;
                }
                temp->next = NULL;
                delete tail;
                tail = temp;
            }
        }
    }

    // INSERTION IN LINKED LIST at any position
    void insert(int pos, int val)
    {
        if (pos < 0)
        {
            cout << "Invalid position\n";
            return;
        }
        if (pos == 0)
        {
            push_front(val);
            return;
        }
        Node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Position out of bounds\n";
                return;
            }
            temp = temp->next;
        }
        Node *newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // DELETION IN LINKED LIST at any position
    void erase(int pos)
    {
        if (head == NULL)
        {
            cout << "there is no node\n";
            return;
        }
        if (pos < 0)
        {
            cout << "Invalid position\n";
            return;
        }
        if (pos == 0)
        {
            pop_front();
            return;
        }
        Node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Position out of bounds\n";
                return;
            }
            temp = temp->next;
        }
        if (temp->next == NULL)
        {
            cout << "Position out of bounds\n";
            return;
        }
        Node *del = temp->next;
        temp->next = del->next;
        del->next = NULL;
        delete del;
    }

    // SEARCHING IN LINKED LIST

    int search(int key)
    {
        Node *temp = head;
        int idx = 0;

        while (temp != NULL)
        {
            if (temp->data == key)
            {
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1; // not found
    }

    Node *reversell()
    {
        Node *prev = NULL;
        Node *curr = head;
        Node *next = NULL;
        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }

    Node *middeleNode()
    {
        Node *slow = head;
        Node *fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
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
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);
    ll.printll();

    cout << ll.search(11) << endl;
    ll.insert(0, 10);
    // ll.erase(3);
    ll.printll();

    ll.reversell();
    ll.printll();

    Node *mid = ll.middeleNode();
    cout << "Middle: " << mid->data << endl;
    // ll.pop_front();
    // ll.printll();
    // ll.pop_back();
    // ll.printll();
    return 0;
}