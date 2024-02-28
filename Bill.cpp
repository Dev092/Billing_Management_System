#include "Bill.h"
#include<iostream>
#include"Customer.h"
#include"Date.h"
Bill::Bill():billNumber(111),billAmount(980)
{
}
void Bill::accept()
{
    int no;
    std::cout<<"Enter the bill number: "<<std::endl;
    std::cin>>no;
    Bill::setBillNumber(no);

    char* name;
    name=new char[20];
    std::cout<<"Enter the customer name : "<<std::endl;
    std::cin>>name;
    customerInfo.setCustomerName(name);

    
    billDate.accept();


    int billamt;
    std::cout<<"Enter the bill amount: "<<std::endl;
    std::cin>>billamt;
    Bill::setBillAmount(billamt);
    delete name;
}
Bill::~Bill()
{
}
std::ostream &operator<<(std::ostream &os, const Bill &rhs)
{
    os << "billNumber: " << rhs.billNumber
       << " customerInfo: " << rhs.customerInfo.getCustomerName()
       << " billDate: " << rhs.billDate.getDay()<<" "<<rhs.billDate.getMonth()<<" "<<rhs.billDate.getYear()
       << " billAmount: " << rhs.billAmount;
    return os;
}
