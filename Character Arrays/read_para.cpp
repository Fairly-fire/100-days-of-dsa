#include<iostream>
using namespace std;
//Read sentence/paragraph and store it
//cin.get() reads a single character
//put a loop to read characters till you get a new line '\n'

void readLine(char a[] , int maxLen, char delim = '\n'){
    int i =0;
    char ch = cin.get();
    while (ch != delim)
    {
        a[i] = ch;
        i++;
        if (i == (maxLen -1 )){
            break;
        }
        ch = cin.get();
    }
    //once out of the loop 
    a[i] = '\0';
    return ; 
    
}
int main(){
    //Input 
    char s[1000];
    //readLine( s, 1000);//Already present in C++
    cin.getline(s, 100, '.');
    cout<<s<<endl;
    return 0;

}