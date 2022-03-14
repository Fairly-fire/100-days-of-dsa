#include<iostream>
using namespace std;

int main(){
    char c[10][10];
    c[0][0] = 'A'; //Updating a particular bucket

    //char a[][10] = {{'somya','and','bunny','\0'},{'are','besties','\0'}};
    char a[][100] = {"Somya and Bunny","are besties","Do you","have one?"};
    cout<< a[0]<<endl;
    cout<< a[1]<<endl;
    cout<< a[2]<<endl;
    cout<< a[3]<<endl;

    return 0;
}