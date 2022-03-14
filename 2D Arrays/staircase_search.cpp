//Search in Row & Col wise Sorted Array
#include<iostream>
using namespace std;

int search(int a[][100],int n,int k){
    if( n==0){
        cout<<"No elements entered";
        return -1;
    }
    
    int smallest = a[0][0],largest = a[n-1][n-1];
    if(k<smallest || k> largest){
        cout<<"Element not found";
        return -1;
    }
    
    int i=0,j=n-1;
    while(i<n && j>=0){
        if(a[i][j]== k){
            cout<<"Element found at : "<<i<<","<<j<<"\n";
            return 1;
        }
        if(a[i][j]>k){
            j--;
        }
        else{
            i++;
        }
    }
    cout<<"Element not found";
}

int main(){
    int n;
    cin>>n;
    int key;
    cin>>key;
    int a[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<n; j++){
            cin>>a[i][j];
        }
    }

    search(a,n,key);
    return 0;
}