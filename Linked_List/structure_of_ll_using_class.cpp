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

};
int main()
{
    Node *y = new Node(5,nullptr);
     Node *x = new Node(2,y);
    cout<<x->next;
    
    return 0;
}