#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n; 
    int maxSum = 0, cs =0;

    int a[1000];

    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    //Kadane's Algorithm for maximum subarray
    for(int i =0; i<n; i++){
        cs += a[i];
        if(cs <0){
            cs =0;
        }
        maxSum = max(cs , maxSum);
    }
    cout<<"Maximum Sum is : "<<maxSum<<endl;
    
    return 0;
}