#include<iostream>
using namespace std;
  
struct Node
{
   
   
    int data;
    Node* next;
    
    Node(int data1,Node *nextp){
        data = data1;
        nextp = next;
    }
};

int main()
{
    Node *x = new Node(5,nullptr);
    cout<<x->data<<endl;
    cout<<x->next;
    
    return 0;
}