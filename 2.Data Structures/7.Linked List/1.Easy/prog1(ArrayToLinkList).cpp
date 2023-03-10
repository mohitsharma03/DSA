//Convert array to linked list
//gfg:


#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
  
    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }
  
    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};


class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        Node* root=new Node(arr[0]);
        Node* temp=root;
        for(int i=1;i<arr.size();i++)
        {
            Node* newNode=new Node(arr[i]);
            temp->next=newNode;
            temp=temp->next;
        }
        return root;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        Node* ans = obj.constructLL(arr);
        while (ans) {
            cout << ans->data << " ";
            ans = ans->next;
        }
        cout << "\n";
    }
    return 0;
}