#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n; 
/* Method 1
    int a[1000];
    int maxsum =0, currsum =0;
    int left =-1 , right =-1;

    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    //Generating all subarrays
    for(int i=0; i<n; i++ ){
        for(int j=i ;j<n ;j++){
            //Elements of subarray(i,j)
            currsum = 0;
            for(int k=i; k<=j; k++){
                currsum += a[k];
            }
            //Update Maxsum if currsum >maxsum
            if(currsum>maxsum){
                maxsum = currsum;
                left =i;
                right =j;
            }
    }
    }
    */
   // Method 2
    int a[1000];
    int cumsum[1000] = {0}; //Cumulative Sum
    int maxsum =0, currsum =0; //Maximum Sum and Current Sum
    int left =-1 , right =-1;
    cin>> a[0];
    cumsum[0] = a[0];
    for(int i=1; i<n;i++){
        cin>>a[i];
        cumsum[i] = cumsum[i-1] + a[i];
    }
    //Generating all subarrays
    for(int i=0; i<n; i++ ){
        for(int j=i ;j<n ;j++){
            //Elements of subarray(i,j)
            currsum = 0;
            currsum = cumsum[j]- cumsum[i-1];
            //Update Maxsum if currsum >maxsum
            if(currsum>maxsum){
                maxsum = currsum;
                left =i;
                right =j;
            }
    }
    }
    //

    //Print the maximum Sum
    cout<<"Maximum Sum is : "<<maxsum<<endl;

    //Print the subarray
    for(int i=left ; i<=right;i++){
        cout<<a[i]<<" ";
    }
    
    return 0;
}