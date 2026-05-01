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
    bool Search(Node * head,int n){
        Node* temp = head;
        while(temp){
            if(temp->data == n){
                return true;
            }
            temp = temp->next;
        }
     return false;
    }
};
int main()
{
    Node *y = new Node(5,nullptr);
     Node *x = new Node(2,y);
       Node *w = new Node(8,x); 
    cout<<w->Search(w,7)<<endl;
    cout<<w->Search(w,8);
    return 0;
}