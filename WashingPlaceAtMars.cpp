#include "WashingPlaceAtMars.h"

#include <stdexcept>
#include <iostream>


                WashingPlaceAtMars::WashingPlaceAtMars() {}


                void WashingPlaceAtMars::addVehicle(Vehicle* vehicle) noexcept
                {
                    vehicleQueue.push(vehicle);
                }


                bool WashingPlaceAtMars::allVehiclesAreWashed() const noexcept
                {
                    return vehicleQueue.empty();
                }


                void WashingPlaceAtMars::washFirstCarInQueue() noexcept(false)
                {
                    if(allVehiclesAreWashed())
                        throw std::length_error("All vehicles have been already washed!");
                    Vehicle* current=vehicleQueue.front();

                    std::cout<<"Now we have to wash one "<< current->typeOfVehicle() <<'.';
                    std::cout<<"We first wash windows,there are "<< current->numberOfWindows() <<" windows.";
                    std::cout<<"Then we wash wheels,there are "<< current->numberOfWheels() <<" wheels.";
                    std::cout<<"Only seats are left,"<< current->numberOfPlacesToSit() <<" of them.";
                    std::cout<<"We have finished everything,for now."<<std::endl;

                    delete current;
                    current=nullptr;

                    vehicleQueue.front()=nullptr;
                    vehicleQueue.pop();
                }


                WashingPlaceAtMars::~WashingPlaceAtMars()
                {
                    while(!allVehiclesAreWashed())
                    {
                        Vehicle* temp=vehicleQueue.front();
                        delete temp;
                        temp=nullptr;

                        vehicleQueue.front()=nullptr;
                        vehicleQueue.pop();
                    }
                }
