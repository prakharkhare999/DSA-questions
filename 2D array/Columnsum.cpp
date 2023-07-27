
#include<iostream>
using namespace std;
void print(int arr[3][3],int rows,int cols)
{
for(int i=0;i<rows;i++){
    int sum=0;
    for(int j=0;j<cols;j++){
        sum=sum+arr[j][i];
    }
    cout<<sum<<ends<<endl;
}
}
int main(){
    int arr[3][3]={
        {2,3,4},
        {2,5,6},
        {9,6,1}
    };
    int rows=3;
    int cols=3;
    print(arr,rows,cols);

}