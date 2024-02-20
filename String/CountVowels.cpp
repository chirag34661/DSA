#include<iostream>
using namespace std;
int main(){
    int i=0,sum=0;
    char str[10];
    gets(str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
           sum++;
        }
    }

    cout<<"The total number of the vowels in the given string is "<<sum;
    system("pause>0");
}
