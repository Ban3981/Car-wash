#ifndef TYPESOFVEHICLES_H_INCLUDED
#define TYPESOFVEHICLES_H_INCLUDED

#include "Vehicle.h"


            class Car:public Vehicle
            {
            public:
                Car();
                virtual ~Car();
            };


            class Truck:public Vehicle
            {
            public:
                Truck();
                virtual ~Truck();
            };


            class Bike:public Vehicle
            {
            public:
                Bike();
                virtual ~Bike();
            };

#endif // TYPESOFVEHICLES_H_INCLUDED
