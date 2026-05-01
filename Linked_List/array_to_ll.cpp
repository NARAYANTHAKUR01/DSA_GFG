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
    static Node* ll_conversion_from_array(int* arr,int n){
        Node * head = new Node(*(arr+0));
        Node *tail = head;
        for(int i = 1;i<n;i++){
            Node * temp = new Node(*(arr+i));
            tail->next = temp;
            tail = tail->next;
        }
        return head;
    }
    static void Traversal(Node* head) {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    int arr[] = {1,2,3,4,5,6};
   int n = 6;
    Node* head = Node::ll_conversion_from_array(arr,n);
    Node::Traversal(head);
    
    return 0;
}