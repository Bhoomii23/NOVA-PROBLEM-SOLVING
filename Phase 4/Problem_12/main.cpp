#include "DataLogger.h"

int main() {
    DataLogger logger("vehicle_logs.txt");

    logger.logData(2025);             // Logging an integer
    logger.logData(78.9f);            // Logging a float
    logger.logData("Engine started"); // Logging a string

    return 0;
}
