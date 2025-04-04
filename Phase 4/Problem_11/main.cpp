#include "DiagnosticTool.h"

int main() {
    DiagnosticTool dt1("Engine Scanner");
    DiagnosticTool dt2("Battery Tester");

    dt1.performTest();
    dt2.performTest();
    dt1.performTest();

    
    DiagnosticTool::displayTotalTests();

    return 0;
}
