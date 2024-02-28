#include"Customer.h"
#include"Bill.h"
#include"Date.h"
#include<iostream>
int main()
{
    Bill *b[2];
    try{
    
    for(int i=0;i<2;i++){
        b[i]=new Bill();
        b[i]->accept();
    }
    }catch(const std::exception& e){
       std::cout << "Exception caught: " << e.what() << std::endl;
    }

    for(int i=0;i<2;i++){
        std::cout<<*b[i];
    }

    for(int i=0;i<2;i++){
        delete b[i];
    }
    return 0;
}