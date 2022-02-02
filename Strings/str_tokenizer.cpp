#include<iostream>
#include<cstring>
using namespace std;
//Creating String tokenizer
char *mystrtok(char *str, char delim){ //String and single character which acts as a delimiter
    static char *input = NULL;
    if(str != NULL){
        //We are making the first call
        input = str;
    }

    //Base case after the final token has been returned
    if(input == NULL){
        return NULL;
    }

    //Start extracting tokens and store them in an array
    char *output = new char[strlen(input)+1];
    int i=0;
    for(;input[i] !='\0'; i++){
        if(input[i] != delim){
            output[i] = input[i];
        }
        else{
            output[i] = '\0';
            input += i + 1;
            return output;
        }
    }

    //Corner case : For the last word when there is no delimiter present
    output[i] = '\0';
    input = NULL;
    return output;
}
int main(){
    char s[100]= "Today is a cold day";
    
    char *ptr = mystrtok(s,' ');//Any delimiter can be used , like "," , ".", ":" etc.
    cout<<ptr<<endl;

    while(ptr != NULL){
        ptr = mystrtok(NULL,' ');
        cout<<ptr<<endl;
    }

    return 0;
}
