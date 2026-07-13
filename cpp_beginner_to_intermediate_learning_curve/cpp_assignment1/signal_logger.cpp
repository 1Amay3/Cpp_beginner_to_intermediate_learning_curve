#include "signal_logger.hpp"
// Add any other #includes you need below this line
#include <iostream>
#include <cmath>
#include <fstream>


SignalLogger::SignalLogger(const std::string& logger_name) {
    // TODO
    _name = logger_name;
}

void SignalLogger::addSample(double i_val, double q_val, int index) {
    // TODO
    IQSample newSample{i_val, q_val, index};
    _samples.push_back(newSample);
}

int SignalLogger::getSampleCount() const {

    // TODO
    //std::cout<<_samples.size()<< std::endl;

    return _samples.size();
}

double SignalLogger::getAverageMagnitude() const {
    // TODO
    double out{0.0};
    if(_samples.size()==0){
        return 0;
    }
    for(int i = 0 ; i < _samples.size() ; i++){
        double magn=std::sqrt((_samples[i].i_component*_samples[i].i_component)+(_samples[i].q_component*_samples[i].q_component));
        
        out+=magn;
    }

    return out/_samples.size();
}

bool SignalLogger::exportToCSV(const std::string& filename) const {
    // TODO
    std::ofstream csv_file(filename);
    if (!csv_file.is_open()){
        std::cerr << "Error: File not opened!" << std::endl;
        return false;
    }

    csv_file<<"index,i_component,q_component,magnitude"<<"\n";

    for (int i = 0; i<_samples.size();i++){
        double magn=std::sqrt((_samples[i].i_component*_samples[i].i_component)+(_samples[i].q_component*_samples[i].q_component));
        csv_file<<_samples[i].sample_index<<","<<_samples[i].i_component<<","<<_samples[i].q_component<<","<<magn<<"\n";
        }

    csv_file.close();

    return true;
}

void SignalLogger::printSummary() const {

    // TODO
    std::cout <<"Logger: PlutoSDR-CH0 | Samples: " << getSampleCount() <<" | Avg Magnitude : "<<getAverageMagnitude()<< std::endl;


}