#include<bits/stdc++.h>
using namespace std;

int main()
{
int opt;
cout<<"1.Push\n2.Pull\n3.Display\n4.Exit\n";
cout<<"Select Option: ";
cin>>opt;
switch(opt)
{
 case 1: cout<<"push"<<endl;break;
 case 2: cout<<"pull"<<endl;break;
 case 3: cout<<"display"<<endl;break;
 case 4: system("cls");
         cout<<"Thank You!";break;
 default:
    cout<<"Error!";break;
}
system("pause>0");
}
