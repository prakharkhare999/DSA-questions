#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int s,int e){
    //step-1->chose pivot
    int pivotindex=s;
    int pivotelement=arr[s]; 
    //step 2 find right position for pivot element abd place its ther
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivotelement){
            count ++;
        }

    }
    //jb loop se bhar aaunga to mere pass pivot ki right position hogi
    int rightindex=s+count;
    swap(arr[pivotindex],arr[rightindex]);
    pivotindex=rightindex;

    //step3 -> left me chote or right me bde
    int i=s;
    int j=e;
    while(i<pivotindex && j>pivotindex){
        while(arr[i]<=pivotelement){
            i++;
        }
        while(arr[j]>pivotelement){
            j--;
        }
    }
    
    //2nd case ho skta hai 
    //a you found the element to swap
    //b no need to swap
    if(i<pivotindex && j>pivotindex){
        swap(arr[i],arr[j]);
    }
    return pivotindex;


}
void quicksort(int arr[],int s,int e){
    //base case
    if(s>=e){
        return;
    }
    //particion call
  int p=  partition(arr,s,e);
    //recursive call

    //pivot element ->left
    quicksort(arr,s,p-1);
    //pivot element ->right
    quicksort(arr,p+1,e);
   
}

int main(){
     int arr[]={8,1,3,4,20,50,30,30,50};
     int n=9;
     int s=0;
     int e=n-1;
     quicksort(arr,s,e);
     
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
return 0;
}