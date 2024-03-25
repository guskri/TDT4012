#include "utilities.h"
#include "cannonball.h"

void testDeviation(double compareOperand, double toOperand,double maxError, string name);



int main() {
    //testDeviation(posX(0.0,50.0,5.0), 250.0, 0.001, "posX(0.0,50.0,5.0)");
    
    /*for (int i=0; i < 10; ++i){
        int number = randomWithLimits(1,10);
        cout << number;
    }*/

    playTargetPractice();
    return 0;
}



void testDeviation(double compareOperand, double toOperand,double maxError, string name){
if (abs(compareOperand - toOperand) <= maxError){
    cout << "flytallene er tilnærmet lik\n";
} else {
    cout << "de er ikke like";
}   
}