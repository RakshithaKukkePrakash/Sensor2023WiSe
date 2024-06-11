#include "SensorNetwork.h"
#include "DuplicateSensorName.h"

SensorNetwork& SensorNetwork::add(std::unique_ptr<Sensor> &&sensor) {
    for(auto& sen: sensors){
        if(sensor.get()->getName() == sen.get()->getName())
        {
            throw DuplicateSensorName(sensor.get()->getName());
        }
        else{
            sensors.emplace_back(move(sensor));
        }
    }
    return *this;
}
