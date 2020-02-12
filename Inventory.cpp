#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;

//initializes an Inventory
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

//Sell a item if stock is avalible
bool Inventory::sell()
{
  if(m_in_stock > 0){
    m_in_stock--;
    return true;
  }else{
    return false;
  }//else
}

//Operater to stream the item name and cost
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}
