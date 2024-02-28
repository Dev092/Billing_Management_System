#ifndef BILL_H
#define BILL_H

#include "Customer.h"
#include "Date.h"
#include <ostream>
class Bill
{
    int billNumber;
    Customer customerInfo;
    Date billDate;
    int billAmount;

public:
    Bill();
    void accept();

    int getBillNumber() const { return billNumber; }
    void setBillNumber(int billNumber_) { billNumber = billNumber_; }

   
    int getBillAmount() const { return billAmount; }
    void setBillAmount(int billAmount_) { billAmount = billAmount_; }

    friend std::ostream &operator<<(std::ostream &os, const Bill &rhs);
    ~Bill();
};

#endif // BILL_H
