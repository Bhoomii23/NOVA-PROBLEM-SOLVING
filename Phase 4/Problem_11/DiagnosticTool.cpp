#include "DiagnosticTool.h"

// Initialize the static data member
int DiagnosticTool::totalTestsPerformed = 0;

DiagnosticTool::DiagnosticTool(string name) : toolName(name) {}

void DiagnosticTool::performTest() {
    cout << toolName << " is performing a diagnostic test...\n";
    totalTestsPerformed++;
    cout << "Test completed successfully!\n";
}

void DiagnosticTool::displayTotalTests() {
    cout << "Total diagnostic tests performed: " << totalTestsPerformed << endl;
}
