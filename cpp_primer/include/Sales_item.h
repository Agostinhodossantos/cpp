#ifndef SALESITEM_H
#define SLAESITEM_H

// Definition of Sales item class and related functions goes here
#include<iostream>
#include <string>

class Sales_item {
    friend std::istream& operator>>(std::istream&, Sales_item&);
    friend std::ostream& operator<<(std::ostream&, const Sales_item&);
    friend bool operator<(const Sales_item&, const Sales_item&);
    friend bool 
    operator==(const Sales_item&, const Sales_item&);

    public:
        Sales_item() = default;
        Sales_item(const std::string &book): bookNo(book) { }
        Sales_item(std::istream &is) { is >> *this;}
    public:
        Sales_item& operator +=(const Sales_item&);

        //operations on Sales_item objects
        std::string isbn() const { return bookNo; }
        double avg_price() const;
    private:
        std::string bookNo;
        unsigned units_sold = 0;
        double revenue = 0.0;
};

inline 
bool compareIsbn(const Sales_item &lhs, const Sales_item &rhs) 
{ return lhs.isbn() == rhs.isbn(); }


// nonmember binary operator: must declare a parameter for each operand
Sales_item operator+(const Sales_item&, const Sales_item&);