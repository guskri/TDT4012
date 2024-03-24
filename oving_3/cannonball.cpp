#include "cannonball.h"

double acclY(){
    return -9.81;
}

double velY(double initVelocityY, double time){
    return initVelocityY + (acclY() * time);
}

double posX(double initPositionX, double initVelocityX, double time){
    return initPositionX + initVelocityX * time + (0 * pow(time,2)/2);
}

double posY(double initPositionY, double initVelocityY, double time){
    return initPositionY + initVelocityY * time + (acclY() * pow(time,2)/2);
}

void printTime(double time){
    //time = sekunder
    int sekund = static_cast<int>(time) % 60;
    int totalMinutt = static_cast<int>(time) / 60;
    int hours = totalMinutt / 60;
    int minutt = totalMinutt % 60;
    cout << "tid er" << hours << " timer" << minutt << " minutt og " << time << " sekund \n";
}

double flightTime(double initVelocityY) {
    return ((-2 * initVelocityY)/acclY());
}

