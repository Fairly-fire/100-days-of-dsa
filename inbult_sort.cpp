#include <iostream>
#include<algorithm>
using namespace std;

//Defining a comparator function
bool compare(int a , int b){
    return a>b;
}

int main(){

    int n,key,i;
    cin>>n;
    
    int a[1000];
    for(i= 0; i<n ; i++){
        cin>>a[i];
    }

    //Sort an array using sort() function, more efficient
    //sort(a , a+n);

    //Sort an array using sort() function in decreasing order, more efficient
    sort(a , a+n, compare);

    for(i= 0; i<n ; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}