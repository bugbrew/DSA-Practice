#include<iostream>
using namespace std;

int linear_search(int arr[], int n, int key){
  for(int i=0; i<n; i++){
    if (arr[i] == key){
      return i;
    }
    else{
      return -1;
    }
  }
}

int main(){

  int n,key;

  cout<<"Enter the size of array"<<endl;
  cin>>n;

  int arr[n];
  cout<<"Enter the array: "<<endl;
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  cout<<"Enter the key: "<<endl;
  cin>>key;

  int result = linear_search(arr, n, key);
  if (result != -1){
    cout<<"Element is present at index "<< result <<" in the array."<<endl;
  }
  else{
    cout<<"Element is not present in the array!"<<endl;
  }

  return 0;
}