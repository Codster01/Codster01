#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"Enter a You want a table of: ";
cin>>a;

for (int i = 0; i <= 9;)
{
    b = (++i)*a;
    cout<<"The product of "<<a<< " X " <<i<< " is "<<b<<endl;
}

return 0;
}