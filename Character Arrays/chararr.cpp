#include<iostream>
using namespace std;

int main(){

    int b[] = {1, 2 ,3};
    cout << b << endl; //Address (Default)

    char a[] = {'a', 'b', 'c','\0'};
    cout<<a<<endl; //Contents (Special) unless you find a '\0'

    //Input 
    char s[10];
    cin>>s;
    cout<<s<<endl;

    //Comparing sizes
    char s1[] = {'h','e','l','l','o'};// No '\0' is input hence it prints values till it finds it
    char s2[] = "hello"; //'\0' is input automatically when assigned with value using thus method

    cout<<s1<<" "<<sizeof(s1)<<endl; // size is 5 bytes
    cout<<s2<<" "<<sizeof(s2)<<endl;// size is 6 bytes coz of '\0'

    return 0;

}