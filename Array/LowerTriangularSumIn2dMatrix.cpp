#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i>=j){
                sum=sum+arr[i][j];
            }
        }
    }
    cout<<"The Lower Triangular sum of the 2D Matrix is: "<<sum;
    system("pause>0");
}
