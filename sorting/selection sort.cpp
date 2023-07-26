#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{3,4,5,6,2,1,9};
    int n=arr.size();
    //n-1 because last element sorted hoga
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
            min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }

}