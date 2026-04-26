#include<iostream>
using namespace std;
  int partition(int arr[],int l,int h){
    int i = l;
    int j = h;
    int pivot = arr[l];
    while(i<j){
        do{
            i++;
        }
        while(i<=h &&arr[i]<=pivot);
        do{
            j--;
        }
        while(arr[j]>pivot);
        if(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[l];
    arr[l] = arr[j];
    arr[j] = temp;
    return j;
  }
  void quicksort(int arr[],int l,int h){
    if(l<h-1){ 
        int p = partition(arr,l,h);
        quicksort(arr,l,p);
        quicksort(arr,p+1,h);
    }
  }
int main()
{
    int a[] = {125,4,35,41,86,479};
    quicksort(a,0,6);
    for(int i = 0;i<6;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}