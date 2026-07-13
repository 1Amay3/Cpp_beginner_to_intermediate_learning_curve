#include <iostream>
#include "signal_logger.hpp"

int main() {
    SignalLogger logger("PlutoSDR-CH0");

    logger.addSample(1.0,   0.0,  0);
    logger.addSample(0.0,   1.0,  1);
    logger.addSample(-1.0,  0.0,  2);
    logger.addSample(0.0,  -1.0,  3);
    logger.addSample(0.707, 0.707, 4);

    std::cout << "Sample count: " << logger.getSampleCount() << std::endl;

    std::cout << "Avg magnitude: " << logger.getAverageMagnitude() << std::endl;

    bool ok = logger.exportToCSV("samples_output.csv");
    if (ok)
        std::cout << "Export: SUCCESS" << std::endl;
    else
        std::cout << "Export: FAILED" << std::endl;

    logger.printSummary();

    SignalLogger empty_logger("EmptyLogger");
    std::cout << "Empty avg magnitude: " << empty_logger.getAverageMagnitude() << std::endl;

    return 0;
}