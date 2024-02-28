#ifndef CUSTOMER_H
#define CUSTOMER_H

#include<cstring>
#include <ostream>
class Customer{
    char* customerName;
    public:
    Customer();
    Customer(const char* cName);
    Customer(const Customer &);

    const char* getCustomerName() const { return customerName; }
    void setCustomerName(char* customerName_) { strcpy(customerName,customerName_);}
    void accept();

    friend std::ostream &operator<<(std::ostream &os, const Customer &rhs);
    ~Customer();

  


};


#endif // CUSTOMER_H
