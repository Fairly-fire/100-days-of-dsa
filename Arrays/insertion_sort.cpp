#include <iostream>
using namespace std;
//Insertion Sort
void insertion_sort(int a[],int n){
    int i, j;
     
    for(i=1;i<=n-1;i++){
       int e = a[i];
       //Place the current element at "right" position in the sorted part
        j = i-1 ;
        while(j >= 0 and a[j] > e){
            a[j+1] = a[j];
            j = j-1 ;
        }
        a[j+1] = e;
    }
}

int main(){
    int n,key,i;
    cin>>n;
    
    int a[1000];
    for(i= 0; i<n ; i++){
        cin>>a[i];
    }

    insertion_sort(a,n);

    for(i= 0; i<n ; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}