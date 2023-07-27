//question -> print the wave pattern
// i/p->   1,2,3,4
//         5,6,7,8
//         9,10,11,12

// wave->
// |     |`````````|        
// |     |         | 
// |     |         | 
// |     |         |
// |_____|         |


// o/p->  

// 1,5,9,6,10,6,2,3,7,11,12,8,4


// approach
// col->0  top to bottum
// col->1  b to t
// col->2  t to b
// col->3  b to t

// means jb col->even = top tp buttom
// """""""" col->odd=buttom to top

#include<bits/stdc++.h>
using namespace std;

void waveprint (vector<vector<int>>v){
    int row=v.size();
    int col=v[0].size();

    for(int startcol=0;startcol<col;startcol++){
        //enen no of column -> top to buttom
        if((startcol & 1)==0){
            for(int i=0;i<row;i++){
                cout<<v[i][startcol]<<" ";
            }

        }
        else{
            //odd number of col->buttom to top
            for(int i=row-1;i>=0;i--){
                cout<<v[i][startcol]<<" ";
            }
        }
    }

 
}

int main(){
    vector<vector<int> >v{
        {2,3,5,6},
        {3,5,7,2},
        {9,2,4,5},
        {3,5,62,22}
    };
    waveprint(v);
    return 0;
}