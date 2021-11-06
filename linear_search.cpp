#include <iostream>
using namespace std;

int main(){
    int n,key,i;
    cin>>n;
    
    int a[1000];
    for(int i= 0; i<n ; i++){
        cin>>a[i];
    }

    //Ask the element to search
    cin>>key;

    //Finding the index of element by traversing the array
    //Linear search Algorithm
    for(int i=0; i<n ; i++){
        if(a[i] == key){
            cout<<key <<" found at "<<i<<" index."<<endl;
            break;
        }
    }
    if(i == n-1){
        cout<<key <<" is not present."<<endl;
    }
    return 0;
}
