#include<iostream>
using namespace std;
// Given a sorted array , find pair of elements that sum to k (Given)
int main(){
    int a[] = {2,4,6,8,10,12,15,16};
    int key = 20;
    int i =0;
    int j = sizeof(a)/sizeof(int)-1 ;

    while (i<j)
    {
        int currsum = a[i]+a[j];
        if(currsum> key){
            j--;
        }
        else if(currsum<key){
            i++;
        }
        else if(currsum==key){
            cout<<a[i]<<" and "<<a[j]<<endl;
            i++;
            j--;
        }
    }
    
    return 0;
}