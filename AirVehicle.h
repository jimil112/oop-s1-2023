// AirVehicle.h

#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H

class AirVehicle {
public:
    AirVehicle();
    AirVehicle(int w);

    int get_weight() const;
    void set_weight(int w);

    float get_fuel() const;
    void set_fuel(float f);

    int get_numberOfFlights() const;
    void set_numberOfFlights(int num);

    void refuel();
    virtual void fly(int headwind, int minutes);

private:
    int weight;
    float fuel;
    int numberOfFlights;
};

#endif
