#include <iostream>
#include "Bike_yard.h"

int main() {
    Bike_yard yard(3);
    
    Bike bike1("Brand A", 1);
    Bike bike2("Brand B", 2);
    Bike bike3("Brand A", 3);
    
    yard.add_Stock(bike1);
    yard.add_Stock(bike2);
    yard.add_Stock(bike3);
    
    std::cout << "Total Bike Yard Stock: " << yard.get_Total_Stock_Count() << "\n";
    std::cout << "Stock Count Brand A: " << yard.get_Stock_Quantity(1) << "\n";
    
    Bike* stockList = yard.get_Current_Stock_List();
    for (int i = 0; i < yard.get_Total_Stock_Count(); ++i) {
        std::cout << "Bike " << i+1 << ": " << stockList[i].getBrand() << " - Code " << stockList[i].getCode() << "\n";
    }
    
    return 0;
}
