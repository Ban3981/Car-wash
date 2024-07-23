#include "Vehicle.h"


            Vehicle::Vehicle(const std::string& name,int windows,int placesToSit,int wheels):name(name),windows(windows),placesToSit(placesToSit),wheels(wheels) {}


            Vehicle::~Vehicle() {}

            const std::string& Vehicle::typeOfVehicle() const noexcept
            {
                return name;
            }


            int Vehicle::numberOfWindows() const noexcept
            {
                return windows;
            }


            int Vehicle::numberOfWheels() const noexcept
            {
                return wheels;
            }


            int Vehicle::numberOfPlacesToSit() const noexcept
            {
                return placesToSit;
            }
