#include "Sensor.h"
#include "Adjuster.h"

Sensor::~Sensor() {
}

std::string Sensor::getName() const {
    return name;
}

Sensor::Sensor(const std::string &name, std::shared_ptr<Adjuster> adjuster):
        name(name), adjuster(adjuster) {

}

float Sensor::reading() const {
    float reading = rawReading();
    if(adjuster != NullAdjuster::sharedInstance)
    {
        reading = adjuster->adjust(reading);
    }
    return reading;
}
