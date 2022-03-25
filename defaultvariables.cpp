#include<iostream>
using namespace std;

inline int product(int a,int b){ // inline finction is used to compile faster than normal.
    return a*b;
}

int main(){
int a,b;
cout<<"Enter values of a and b: ";
cin>>a>>b;
cout<<"Product of " <<a<< " and " <<b<< " is " <<product(a,b)<<endl;
cout<<"Product of " <<a<< " and " <<b<< " is " <<product(a,b)<<endl;
cout<<"Product of " <<a<< " and " <<b<< " is " <<product(a,b)<<endl;
cout<<"Product of " <<a<< " and " <<b<< " is " <<product(a,b)<<endl;
cout<<"Product of " <<a<< " and " <<b<< " is " <<product(a,b)<<endl;
cout<<"Product of " <<a<< " and " <<b<< " is " <<product(a,b)<<endl;
cout<<"Product of " <<a<< " and " <<b<< " is " <<product(a,b)<<endl;

return 0;
}