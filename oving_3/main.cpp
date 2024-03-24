#include "utilities.h"
#include "cannonball.h"

void testDeviation(double compareOperand, double toOperand,double maxError, string name);

int main() {
    testDeviation(100.0,100.05,0.1, "test 1");

    return 0;
}



void testDeviation(double compareOperand, double toOperand,double maxError, string name){
if (abs(compareOperand - toOperand) <= maxError){
    cout << "flytallene er tilnærmet lik\n";
} else {
    cout << "de er ikke like";
}   
}