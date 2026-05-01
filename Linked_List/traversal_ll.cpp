#include<iostream>
using namespace std;
class Node{

    public:
    int data;
    Node * next;


    Node(int d,Node*next){
        data = d;
        this->next = next;
    }
    Node(int d){
        data = d;
        next = nullptr;
    }
    static void Traversal(Node *head){
        Node *temp = head;
        while (temp)
        {
            cout<<temp->data<<endl;
            temp = temp->next;
        }
        
    }

};
int main()
{
    Node *y = new Node(5,nullptr);
     Node *x = new Node(6,y);
     Node *w = new Node(2,x);
    w->Traversal(w); // Method 1 to call the member function instead of calling "Traversal(w)" , it needs to be called using the object and other way is written below
    Node::Traversal(w); // this way can be used only for static functions & above can be used for both
    return 0;
}