#include<iostream>
using namespace std;

template <class T>
int ternary_search(T arr[], int n, T key){
    int left = 0, right = n - 1;

    while(left <= right){
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;

        if(arr[mid1] == key)
            return mid1;

        if(arr[mid2] == key)
            return mid2;

        if(key < arr[mid1]){
            right = mid1 - 1;
        }
        else if(key > arr[mid2]){
            left = mid2 + 1;
        }
        else{
            left = mid1 + 1;
            right = mid2 - 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,5,11,15,17,19,22};
    int n = 8;
    int key = 15;

    int index = ternary_search(arr, n, key);

    if(index != -1)
        cout << "Found at index: " << index;
    else
        cout << "Not found";

    return 0;
}