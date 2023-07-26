#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{8,6,0,4,55,3,99,7,22,9};
    int n=arr.size();
    
    for(int i=0;i<n-1;i++){
      for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
          swap(arr[j+1],arr[j]);
        }
      }
    }  
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
}