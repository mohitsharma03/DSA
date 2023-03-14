//Find the first node of loop/cycle in linked list
//leetcode: https://leetcode.com/problems/linked-list-cycle-ii/description/
//gfg: https://bit.ly/3zuBr66
//ref: https://takeuforward.org/data-structure/starting-point-of-loop-in-a-linked-list/

/*****************************GFG*********************************/
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

class Solution
{
    public:
    int findFirstNode(Node* head)
    {
        if(head == NULL||head->next == NULL) return NULL;
        
        Node* fast = head;
        Node* slow = head;
        Node* entry = head;
            
        while(fast->next != NULL&&fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
                
            if(slow == fast) {
                while(slow != entry) {
                    slow = slow->next;
                    entry = entry->next;
                }
                return slow->data;
            }
        }
        return -1;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        Solution ob;
        int ans = ob.findFirstNode(head);
        cout<<ans<<"\n";
    }
	return 0;
}

/*****************************Leetcode*********************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL||head->next == NULL) return NULL;
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* entry = head;
        while(fast->next != NULL&&fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) {
                while(slow != entry) {
                    slow = slow->next;
                    entry = entry->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};