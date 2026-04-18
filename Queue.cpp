// #include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// class Queue
// {
//     Node *head;
//     Node *tail;

// public:
//     Queue()
//     {
//         head = tail = NULL;
//     }
//     void push(int data)
//     {
//         Node *newNode = new Node(data);
//         if (empty())
//         {
//             head = tail = newNode;
//         }
//         else
//         {
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }
//     void pop()
//     {
//         if (empty())
//             return;

//         Node *temp = head;
//         head = head->next;

//         if (head == NULL)
//         { // queue became empty
//             tail = NULL;
//         }

//         delete temp;
//     }

//     int front()
//     {
//         if (empty())
//         {
//             cout << "Queue is empty\n";
//             return -1; // or throw exception
//         }
//         return head->data;
//     }

//     bool empty()
//     {
//         return head == NULL;
//     }
// };

int main()
{
    queue<int> q; // using STL queue
    // Queue q;
    for (int i = 1; i <= 5; i++)
    {
        q.push(i);
    }

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}