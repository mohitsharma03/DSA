//Delete a Node in Single Linked List
//gfg: https://bit.ly/3Apg5aX
//leetcode: https://leetcode.com/problems/delete-node-in-a-linked-list/description/

/****************************Leetcode soln*************************************/
    void deleteNode(ListNode* node) {
        // just copy the next node value to the current node to be deleted
        node->val=node->next->val;
        // make the current pointer point to the next of next to delete the node 
        node->next=node->next->next;
    }

/***************************GFG soln****************************************/
#include <bits/stdc++.h> 
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node(new_data);
    
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}

void printList(Node *head)
{
   while (head != NULL)
   {
      cout << head->data << " ";
      head = head->next;
   }
   cout << "\n";
}

Node* deleteNode(Node *head,int x)
{
    if(head == NULL)    return NULL;
    if(x == 1)  return head->next;
    Node *curr = head;
    Node *prev;
    int count = 1;
    while(curr != NULL && count<x){
        prev = curr;
        curr = curr->next;
        count++;
    }
    prev->next = curr->next;
    delete curr;
    return head;
}

int main()
{
  int T, i, n, l;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }

        int kk;
        cin>>kk;
        head = deleteNode(head,kk);
        printList(head);
    }
    return 0;
}

