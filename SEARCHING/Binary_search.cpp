#include<iostream>
using namespace std;
template <class T>
int Binary_Search(T *arr,int n,T key){
  int left = 0;
  int right = n-1;
  while(left<=right){
    int mid = left +(right - left)/2;
    if(*(arr+mid) == key){
        return mid;
    }
    if(*(arr+mid)>key){
        right = mid-1;
    }
    else{
        left = mid + 1;
    }
  }  
  return -1;
}

int main()
{
    int arr[] = {1,2,5,11,15,17,19,22};
    int key = 17;
    cout<<Binary_Search(arr,8,key)+1;
    
    return 0;
}