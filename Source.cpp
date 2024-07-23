#include <iostream>
#include "TypesOfVehicles.h"
#include "WashingPlaceAtMars.h"

             int main()
             {
                WashingPlaceAtMars location1;
                location1.addVehicle(new Truck());
                location1.addVehicle(new Truck());
                location1.addVehicle(new Car());
                location1.addVehicle(new Bike());
                location1.addVehicle(new Car());


                for(int i=0;i<10;i++)
                {
                    try
                    {
                        location1.washFirstCarInQueue();
                    }
                    catch(const std::exception& error)
                    {
                        std::cout<<error.what()<<std::endl;
                    }
                }


                /*WashingPlaceAtMars location2=location1;*/

                /*WashingPlaceAtMars location2;
                location2=location1;*/

                /*WashingPlaceAtMars location2=std::move(location1);*/

                /*WashingPlaceAtMars location2;
                location2=std::move(location1);*/

                //Vehicle v("fdsf",4,4,4);
                //Vehicle* p;

                return 0;

             }
