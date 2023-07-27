#include<iostream>
#include<limits.h>
using namespace std;
int findmax(int arr[3][3],int rows,int cols)
{
    int max=INT_MIN;
for(int i=0;i<rows;i++){
   for(int j=0;j<cols;j++){
    if(arr[i][j]>max){
        max=arr[i][j];
    
    }
    }
  }
         return max;
}
int findmin(int arr[3][3],int rows,int cols)
{
    int min=INT_MAX;
for(int i=0;i<rows;i++){
   for(int j=0;j<cols;j++){
    if(arr[i][j]<min){
        min=arr[i][j];
    
    }
    }
  }
         return min;
}
int main(){
    int arr[3][3]={
        {2,3,4},
        {7,5,64},
        {92,63,11}
    };
    int rows=3;
    int cols=3;
    
   cout<< findmax(arr,rows,cols)<<" "<<findmin(arr,rows,cols);
   
}