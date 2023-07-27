#include<bits/stdc++.h>

using namespace std;
void print(int arr[3][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void transpose(int arr[][3],int rows,int cols,int transposearr[][3])
{
for(int i=0;i<rows;i++){
   for(int j=0;j<cols;j++){
      transposearr[j][i]=arr[i][j];
    }
  }

      print(transposearr,rows,cols);
}


int main(){
    int arr[3][3]={
        {2,3,4},
        {7,5,64},
        {92,63,11}
    };
    int rows=3;
    int cols=3;
    
int transposearr[3][3];

   transpose(arr,rows,cols,transposearr);
 
}