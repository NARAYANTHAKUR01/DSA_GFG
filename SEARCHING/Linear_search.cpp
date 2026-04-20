#include<iostream>
using namespace std;

void linear_search(int *arr,int n,int key){
for(int i = 0;i<n;i++){
    if(*(arr+i) == key){
        cout<<"found at "<<i+1;
        return;
    }
}cout<<"not found";
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    linear_search(arr,10,2);
    return 0;
}
// #include<iostream>
// using namespace std;

// void linear_search(int arr[],int n,int key){
// for(int i = 0;i<n;i++){
//     if(arr[i] == key){
//         cout<<"found at "<<i+1;
//         return;
//     }
// }
// cout<<"not found";
// }
// int main()
// {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     linear_search(arr,10,2);
//     return 0;
// }