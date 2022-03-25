#include<iostream>
using namespace std;
int volume(int a){
  
    return (a*a*a);
}
int volume(int l,int b,int h){
  
    return (l*b*h);
}
int volume(double r, float h){
  
    return (3.14*r*r*h);
}


int main(){
 
 cout<<"Volume of Cube  is "<<volume(2)<<endl; 
 cout<<"Volume of cuboid  is "<<volume(2,5,4)<<endl; 
 cout<<"Volume of Cylinder is "<<volume(2,4)<<endl; 
//  one single function can be 
//  used multiple times for different purpose. 
return 0;
}
