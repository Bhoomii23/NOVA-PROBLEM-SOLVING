#ifndef DIAGNOSTICTOOL_H
#define DIAGNOSTICTOOL_H

#include <iostream>
using namespace std;

class DiagnosticTool {
private:
    static int totalTestsPerformed;
    string toolName;
public:
    DiagnosticTool(string name);
    void performTest();
    static void displayTotalTests();
};

#endif
