#include<iostream>
#include<cstring>
using namespace std;

int main(){

    //String Init
    string s0;
    string s1("Hello");

    string s2 = "Hello World";
    string s3(s2);

    string s4 = s3;

    char a[] = {'a','b','c','d','e','\0'};
    string s5(a);

    cout<<s0<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;

    if(s0.empty()){
        cout<<"s0 is an empty string"<<endl;
    }

    //Append
    s0.append("I love C++");
    cout<<s0<<endl;
    s0 += " and Python";
    cout<<s0<<endl;

    //Remove
    cout<<s0.length()<<endl;
    s0.clear();
    cout<<s0.length()<<endl;

    //Compare two strings
    s0 = "Apple";
    s1 = "Mango";
    cout<< s1.compare(s0)<<endl;//Returns an integer == 0 if equal, else >0 or <0
    
    //Overloading Operators
    if(s1>s0){
        cout<<"Mango is lexically greater than Apple"<<endl;
    }
    cout<<s1[0]<<endl;

    //Find Substrings
    string s = "I want to have apple juice";
    int inx = s.find("apple");
    cout<<inx<<endl;

    //Remove a word from a string
    string word = "apple";
    int len = word.length();
    cout<<s<<endl;
    s.erase(inx, len+1);
    cout<<s<<endl;

    //Iterate over all the characters in the string
    for(int i = 0;i<s1.length();i++){
        cout<<s1[i]<<":";
    }
    cout<<endl;

    //Iterators
    for(auto it = s1.begin();it != s1.end();it++){ //auto replaces string::iterator here
        cout<<(*it)<<",";
    }
    cout<<endl;

    //For Each Loop
    for(auto c:s1){//auto replaces char here
        cout<<s1<<".";
    }

    return 0;
}