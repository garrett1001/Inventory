#ifndef _INVENTORY_
#define _INVENTORY_
#include <iostream>

using std::string;
using std::ostream;

//Class for tracking an inventory for sales
class Inventory
{
  private:
    string m_name;
    float m_price;
    int m_in_stock;

  public:
    Inventory(string,float,int);
    bool sell();
    friend ostream& operator<<(ostream&, const Inventory&);
};

#endif
