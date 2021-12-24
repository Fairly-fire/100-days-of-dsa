#include<iostream>
#include<cstring>
using namespace std;
//Read N , followed by N strings and print the largest string and it's length

int main(){
    int n;
    cin>>n;
    char a[1000], largest[1000];
    int len =0, lar_len =0;
    
    cin.get();

    for(int i =0; i<n;i++){
        cin.getline(a,1000);
        //cout<<a<<endl;
        len = strlen(a);
        if(len > lar_len){
            lar_len = len;
            strcpy(largest, a);
        }
    }

    cout<<largest<<" is of length " <<lar_len<<endl;

    return 0;
}