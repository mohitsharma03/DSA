//Reverse Link List(Iterative)
//leetcode: https://leetcode.com/problems/reverse-linked-list/description/
//gfg: https://bit.ly/3zY03mT

///ref: https://takeuforward.org/data-structure/reverse-a-linked-list/

/***********************************GFG Soln***************************************************/
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        Node* prev_p = NULL;
        Node* current_p = head;
        Node* next_p;
        while(current_p) {
            next_p = current_p->next;
            current_p->next = prev_p;
            prev_p = current_p;
            current_p = next_p;
        }
        head = prev_p;
        return head;
    }
    
};

void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
       printf("%d ", temp->data);
       temp  = temp->next;
    }
}

int main()
{
    int T,n,l,firstdata;
    cin>>T;

    while(T--)
    {
        struct Node *head = NULL,  *tail = NULL;

        cin>>n;
        
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        
        for (int i=1; i<n; i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        
        Solution ob;
        head = ob. reverseList(head);
        
        printList(head);
        cout << endl;
    }
    return 0;
}

/****************************Leetcode soln******************************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev_p = NULL;
        ListNode* current_p = head;
        ListNode* next_p;
        while(current_p) {
            next_p = current_p->next;
            current_p->next = prev_p;
            prev_p = current_p;
            current_p = next_p;
        }
        head = prev_p;
        return head;
    }
};