#include <iostream>
using namespace std;

//Defining a comparator function
bool compare(int a , int b){
    return a<b;
}

//Bubble Sort
void bubble_sort(int a[],int n, bool (&cmp)(int a , int b)){
    int i, j;
     //Moving N-1 large elements to the end
    for(i=1;i<=n-1;i++){
        //Pair-wise Swaping in the unsorted part of the array
        for(j=0;j<=n-i-1;j++)
        if(cmp(a[j],a[j+1])){
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

    bubble_sort(a,n, compare);

    for(i= 0; i<n ; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}