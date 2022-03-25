#include<iostream>
using namespace std;
    class shop {

    int ItemId[100];
    int ItemPrice[100];
    int counter;

    public:
    void initCounter(void){counter = 0;}
    void setItemPrice(void);
    void displayItemId(void);
    void num_items(void);

};


   void shop :: setItemPrice(void){
   cout<<"Enter Id of your product: "<<counter + 1<<endl;
   cin>>ItemId[counter];
   cout<<"Enter Price of your product: "<<counter + 1<<endl;
   cin>>ItemPrice[counter];
   counter++;

}

void shop ::displayItemId(void){
  for (int i = 0; i < counter; i++)
  {
      cout<<"Prize of product with Id "<<ItemId[i]<<" is "<<ItemPrice[i]<<endl;
  }
  
}


  
int main(){
shop dukkan;
dukkan.initCounter();
dukkan.setItemPrice();
dukkan.displayItemId();


    
return 0;
}   