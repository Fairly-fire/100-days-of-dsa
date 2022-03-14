#include<iostream>
using namespace std;
void spiralPrint(int a[][1000], int m, int n){
    int startRow=0 , startCol=0;
    int endRow = m-1, endCol = n-1;

    //Print it
    while(startRow <= endRow and startCol <= endCol){
        //Top Row

        for(int i = startCol; i<=endCol; i++){
            cout<<a[startRow][i]<<" ";
        }
        startRow++;

        //Last Col
        for(int i = startRow; i<=endRow; i++){
            cout<<a[i][endCol]<<" ";
        }
        endCol--;

        //Bottom Row
        if(endRow> startRow){
        for(int i = endCol;i>= startCol;i--){
            cout<<a[endRow][i]<<" ";
        }
        endRow--;
        }

        //First Col
        if(endCol>startCol){
        for(int i= endRow;i>=startRow;i--){
            cout<<a[i][startCol]<<" ";
        }
        startCol++;
        }
    }
}

int main(){
    int a[1000][1000] = {0};
    int m,n;
    cin>>m>>n;

    //Iterate over array
    int val = 1;
    for(int row = 0; row<=m-1;row++){
        for(int col = 0; col<=n-1;col++){
            a[row][col] = val;
            val += 1;
            cout<< a[row][col]<<" ";
        }
        cout<<endl;
    }

    spiralPrint(a,m,n);
    return 0;
}