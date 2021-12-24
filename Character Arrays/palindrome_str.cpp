#include<iostream>
#include<cstring>
using namespace std;
//Read a sentence/paragraph and check if its palindrome or not

bool isPalindrome(char a[]){
    int i = 0;
    int j = strlen(a) - 1;
    while(i<j){
        if(a[i] == a[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    //Input 
    char s[1000];
    cin.getline(s, 1000);

    if(isPalindrome(s)){
        cout<<"It is a Palindrome";
    }
    else{
        cout<<"It is not a Palindrome";
    }

    return 0;

}