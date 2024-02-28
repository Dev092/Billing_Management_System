#include "Customer.h"
#include<iostream>
Customer::Customer()
{
    customerName=new char[strlen("RajaYadev")+1];
    strcpy(customerName,"Raja Yadev");
}

Customer::Customer(const char *cName)
{
    customerName=new char[strlen(cName)+1];
    strcpy(customerName,cName);
}

Customer::Customer(const Customer &obj)
{
    customerName=new char[strlen(customerName)+1];
    strcpy(customerName,obj.customerName);
}

void Customer::accept()
{
    char* name;
    std::cout<<"Enter the Customer name : "<<std::endl;
    std::cin>>name;
    customerName=new char[strlen(name)+1];
    strcpy(customerName,name);
}

Customer::~Customer()
{
    delete customerName;
}

std::ostream &operator<<(std::ostream &os, const Customer &rhs) {
    os << "customerName: " << rhs.customerName;
    return os;
}
