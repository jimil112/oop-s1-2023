#include "Bike_yard.h"

Bike_yard::Bike_yard() : capacity(0), totalStockCount(0), stockList(nullptr) {}

Bike_yard::Bike_yard(int cap) : capacity(cap), totalStockCount(0) {
  stockList = new Bike[capacity];
}

int Bike_yard::get_Total_Stock_Count() { return totalStockCount; }

int Bike_yard::get_Stock_Quantity(int code) {
  int count = 0;
  for (int i = 0; i < totalStockCount; ++i) {
    if (stockList[i].getCode() == code) {
      count++;
    }
  }
  return count;
}

Bike* Bike_yard::get_Current_Stock_List() { return stockList; }

bool Bike_yard::add_Stock(Bike b) {
  if (totalStockCount < capacity) {
    stockList[totalStockCount] = b;
    totalStockCount++;
    return true;
  }
  return false;
}

Bike_yard::~Bike_yard() { delete[] stockList; }
