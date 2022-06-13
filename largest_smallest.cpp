#include <iostream>
#include<climits>
using namespace std;

int main(){
    int n,key,i;
    cin>>n;
    
    int a[1000];
    for(int i= 0; i<n ; i++){
        cin>>a[i];
    }

    //Algorithm to find the largest and smallest number in the array
     
     int largest = INT_MIN;
     int smallest = INT_MAX;
     for(int i=0;i<n;i++){
         /* First method
         if(a[i]>largest){
             largest = a[i];
         }
         if(a[i]<smallest){
             smallest = a[i];
         }
         */
        //Easy way 
        largest = max(largest, a[i]);
        smallest = min(smallest, a[i]);
     }

     cout<<"Largest : "<<largest<<endl;
    cout<<"Smallest : "<<smallest<<endl;

    return 0;
}
