//
// Created by mrozb on 18.12.2022.
//

#include <algorithm>
#include <random>
#include <chrono>
#ifndef QUIZ_PROJECT_SHUFFLE_ARRAY_H
#define QUIZ_PROJECT_SHUFFLE_ARRAY_H

#endif //QUIZ_PROJECT_SHUFFLE_ARRAY_H


void Shuffle_array(int *array, int numoquesitinfile)
{
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(array,array+numoquesitinfile,std::default_random_engine(seed));
}

