#include<iostream>
using namespace std;
int main(){
    char str[10];  //we terminate the string by "\0"
    gets(str);
    cout<<"The entered string is : ";
    for(int i=0;str[i]!='\0';i++){
        cout<<str[i];
    }
    system("pause>0");
}
