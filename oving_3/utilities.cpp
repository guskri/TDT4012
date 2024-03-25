#include "utilities.h"

int randomWithLimits(int nedre, int ovre){
    random_device rd;
    default_random_engine generator(rd());
    uniform_int_distribution<int> distribution(nedre,ovre);
    int number = distribution(generator);
    return number;
}