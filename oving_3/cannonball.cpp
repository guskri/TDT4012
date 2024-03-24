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
    int sekund = static_cast<int>(time) % 60;
    int totalMinutt = static_cast<int>(time) / 60;
    int hours = totalMinutt / 60;
    int minutt = totalMinutt % 60;
    cout << "tid er" << hours << " timer" << minutt << " minutt og " << time << " sekund \n";
}

double flightTime(double initVelocityY) {
    return ((-2 * initVelocityY)/acclY());
}

double getUserInputTheta(){
    cout << "skriv inn vinkel: \n";
    double theta;
    cin >> theta; 
    return theta;
}

double getUserInputInitVelocity(){
    cout << "Legg inn startfat: \n";
    double initVelocity;
    cin >> initVelocity;
    return initVelocity;
}

double degToRad(double deg){
    return deg *(M_PI / 180);
}

double getVelocityX(double theta, double initVelocity){
    return initVelocity * cos(degToRad(theta));
}

double getVelocityY(double theta, double initVelocity){
    return initVelocity * sin(degToRad(theta));
}

vector<double> getVelocityVector(double theta, double initVelocity){
    vector<double> velocity = {};
    double a = getVelocityX(theta, initVelocity);
    double b = getVelocityY(theta, initVelocity);
    velocity.push_back(a);
    velocity.push_back(b);
    return velocity;
}

double getDistanceTraveled(double velocityX, double velocityY){
    double distanceTraveled = velocityX * flightTime(velocityY);
    return distanceTraveled;
}

double targetPractice(double distanceToTarget,double velocityX,double velocityY){
    return distanceToTarget - getDistanceTraveled(velocityX,velocityY);
}

