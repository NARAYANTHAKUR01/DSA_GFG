#include<iostream>
using namespace std;
void merge(int arr[],int left,int mid,int right)
{
    int n1 = mid-left+1;
    int n2 = right -mid;
    int k = left;
    int l[n1],r[n2];

    for(int i = 0;i<n1;i++){
        l[i] = arr[left+i];
    }
    for(int i = 0;i<n2;i++){
        r[i] = arr[mid+i+1];
    }
    int i = 0,j =0;

    while(i<n1 && j<n2){
        if(l[i]<r[j]){
           arr[k] = l[i];
           i++; 
        }
        else{
            arr[k] = r[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k] = l[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = r[j];
        j++;
        k++;
    }
}

void mergesort(int arr[],int low,int high){
    if(low < high){
int mid = (low+high)/2;
mergesort(arr,low,mid);
mergesort(arr,mid+1,high);
merge(arr,low,mid,high);
}
}

int main()
{
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergesort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
 
    return 0;
}