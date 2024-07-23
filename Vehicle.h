#pragma once
#include <string>


            class Vehicle
            {
            protected:
                std::string name;
                int windows;
                int placesToSit;
                int wheels;
                Vehicle(const std::string&,int,int,int);
            public:
                virtual const std::string& typeOfVehicle() const noexcept;
                virtual int numberOfWindows() const noexcept;
                virtual int numberOfWheels() const noexcept;
                virtual int numberOfPlacesToSit() const noexcept;
                virtual ~Vehicle();
            };
