#include "DuplicateSensorName.h"

DuplicateSensorName::DuplicateSensorName(std::string sensorName):
invalid_argument(sensorName+" sensor name already exists")
{
}
