#ifndef DATALOGGER_H
#define DATALOGGER_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class DataLogger {
private:
    string logFile;
public:
    DataLogger(string filename);  // Constructor declaration

    // ✅ Template function must be defined inside the header file
    template <typename T>
    void logData(const T& data) {
        ofstream outFile(logFile, ios::app);
        if (outFile) {
            outFile << data << endl;
            cout << "Logged: " << data << endl;
        } else {
            cerr << "Error opening log file!" << endl;
        }
        outFile.close();
    }
};

#endif // DATALOGGER_H

