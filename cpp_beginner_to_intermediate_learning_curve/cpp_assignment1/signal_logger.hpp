#ifndef SIGNAL_LOGGER_HPP
#define SIGNAL_LOGGER_HPP

#include <string>
#include <vector>

struct IQSample {
    double i_component;
    double q_component;
    int    sample_index;
};

class SignalLogger {
public:
    SignalLogger(const std::string& logger_name);

    void addSample(double i_val, double q_val, int index);

    int getSampleCount() const;

    double getAverageMagnitude() const;

    bool exportToCSV(const std::string& filename) const;

    void printSummary() const;

private:
    std::string           _name;
    std::vector<IQSample> _samples;
};

#endif // SIGNAL_LOGGER_HPP