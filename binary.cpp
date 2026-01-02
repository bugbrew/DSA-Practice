#include<iostream>
#include<algorithm>
using namespace std;

int binary_search(int arr[], int start, int mid, int end, int key){
  while (start <= end){
    mid = start+ (end-start)/2;

    if (key == arr[mid]){
      return mid;
    }
    else if (key < arr[mid]){
      end = mid - 1;
    }
    else{
      start = mid + 1;
    }
  }
  return -1;
}

int main(){

  int n, key;

  cout<<"Enter the size of array: "<<endl;
  cin>>n;

  int arr[n];
  cout<<"Enter the elements of array: "<<endl;
  for(int i=0; i< n; i++){
    cin>>arr[i];
  }

  sort(arr, arr + n);

  cout<<"Enter the target element: "<<endl;
  cin>>key;

  int result = binary_search(arr, 0, n-1, n, key);

  if (result != -1){
    cout<<"Element found at index "<<result<<endl;
  }
  else{
    cout<<"Element not present."<<endl;
  }
  return 0;
}