#include<iostream>
using namespace std;
bool linear(int arr[3][3],int rows,int cols,int key)
{
for(int i=0;i<rows;i++){
   for(int j=0;j<cols;j++){
    if(arr[i][j]==key){
        return true;
    }
    }
  }
     return false;
}
int main(){
    int arr[3][3]={
        {2,3,4},
        {7,5,64},
        {92,63,11}
    };
    int rows=3;
    int cols=3;
    
   cout<< linear(arr,rows,cols,92);

}