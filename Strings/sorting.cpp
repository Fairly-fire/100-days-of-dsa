#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

//to sort according to our own conditions
bool compare(string a,string b){
    if(a.length()==b.length()){
        return a<b;
    }
    return a.length()>b.length();
}

int main(){
    int n;
    cin>>n;
    cin.get();
    string s[100];//or can use a vector

    for(int i=0;i<n;i++){
        getline(cin,s[i]);
    }

    sort(s,s+n,compare);

    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }

    return 0;
}