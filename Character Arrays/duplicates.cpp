#include<iostream>
#include<cstring>
using namespace std;
//Remove consecutive duplicate character from a string
//cccoding -- > coding

void removeDuplicates(char a[]){
    
    int l =strlen(a);
    if( l == 1 or l== 0){
        return;
    }
    int prev =0;
    for(int current = 1 ; current< l;current++){
        if(a[current] != a[prev]){
            prev++;
            a[prev] = a[current];
        }
    }
    a[prev+1] = '\0';
    return; 
}

int main(){
    //Input 
    char s[1000];
    cin.getline(s, 1000);
    removeDuplicates(s);
    cout<<s<<endl;

    return 0;

}