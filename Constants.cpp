#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"Enter a degree of (0,30,45,60,90) "<<endl; 
    cin>>a;
    if(a == 0){
        cout<<"Sin0 = 0"<<endl;
    }
    else if(a==30){
        cout<<"Sin30 = 1/2"<<endl;
    }

    else if(a==45){
        cout<<"Sin45 = 1/root2"<<endl;
    }

    else if(a==60){
        cout<<"Sin60 = root3/2"<<endl;
    }
    else if(a == 90){
        cout<<"Sin90 = 1"<<endl;
    }

    else {
        cout<<"Enter a correct value "<<endl;
    }
    
    // sin khatam hota h yaha 
    
    b=(90-a);
    cout<<"The value of cos theta "<<endl;
    if(b==90){
        cout<<"cos90 = 0"<<endl;
    }
    else if(b==60){
        cout<<"cos60 = 1/2"<<endl;
    }

    else if(b==45){
        cout<<"cos45 = 1/root2"<<endl;
    }

    else if(b==30){
        cout<<"cos30 = root3/2"<<endl;
    }
    else if(b == 0){
        cout<<"cos0 = 1"<<endl;
    }

    else {
        cout<<"Enter a correct value "<<endl;
    }


    
    return 0;



}