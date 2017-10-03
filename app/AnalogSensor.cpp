#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>

AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples) {
}

AnalogSensor::~AnalogSensor() {
}

double AnalogSensor::Read() {
    std::vector<double> *readings = new std::vector<double>(mSamples, 10);

    double result = std::accumulate( readings->begin(), readings->end(), 0.0 ) / readings->size();
	delete(readings);
    return result;
}


