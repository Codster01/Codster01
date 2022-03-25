#include<iostream>
using namespace std;
int sum(int a,int b){
    
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter a number: ";
    cin>>b;
    int c = a+b;
    cout<<" Your sum is: ";
  

    return c;
}
int main(){
    int a;
    int b;
   cout<<sum(a,b)<<endl;
   
   return 0;
}