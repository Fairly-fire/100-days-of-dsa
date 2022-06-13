#include <iostream>
using namespace std;
//Selection Sort
void selection_sort(int a[],int n){
    int i, j;
    for(i=0;i<n-1;i++){
        //Finding out smallest element index in unsorted part
        int min_index =i;
        for(j=i;j<=n-1;j++){
            if(a[j]<a[min_index]){
                min_index =j;
            }
        }
        //Swaping the values
        swap(a[i], a[min_index]);
    }
}

int main(){
    int n,key,i;
    cin>>n;
    
    int a[1000];
    for(i= 0; i<n ; i++){
        cin>>a[i];
    }

    selection_sort(a,n);

    for(i= 0; i<n ; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}