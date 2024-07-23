#ifndef WASHINGPLACEATZIKA_H
#define WASHINGPLACEATZIKA_H

#include <queue>
#include "Vehicle.h"

            class WashingPlaceAtMars
            {
                std::queue<Vehicle*> vehicleQueue;

            public:
                WashingPlaceAtMars();

                WashingPlaceAtMars(const WashingPlaceAtMars&)=delete;
                WashingPlaceAtMars& operator=(const WashingPlaceAtMars&)=delete;

                void addVehicle(Vehicle*) noexcept;
                bool allVehiclesAreWashed() const noexcept;
                void washFirstCarInQueue() noexcept(false);
                ~WashingPlaceAtMars();
            };

#endif // WASHINGPLACEATZIKA_H
