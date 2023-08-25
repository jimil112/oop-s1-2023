#ifndef BIKE_YARD_H
#define BIKE_YARD_H

#include "Bike.h"

class Bike_yard {
 public:
  Bike_yard();
  Bike_yard(int capacity);
  int get_Total_Stock_Count();
  int get_Stock_Quantity(int code);
  Bike* get_Current_Stock_List();
  bool add_Stock(Bike b);
  ~Bike_yard();

 private:
  int capacity;
  int totalStockCount;
  Bike* stockList;
};

#endif  
