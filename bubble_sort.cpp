#include <iostream>
using namespace std;
//Bubble Sort
void bubble_sort(int a[],int n){
    int i, j;
     //Moving N-1 large elements to the end
    for(i=1;i<=n-1;i++){
        //Pair-wise Swaping in the unsorted part of the array
        for(j=0;j<=n-i-1;j++)
        if(a[j]>a[j+1]){
            swap(a[j], a[j+1]);
        }
    }
}

int main(){
    int n,key,i;
    cin>>n;
    
    int a[1000];
    for(i= 0; i<n ; i++){
        cin>>a[i];
    }

    bubble_sort(a,n);

    for(i= 0; i<n ; i++){
        cout<<a[i]<<" \n";
    }
    return 0;
}