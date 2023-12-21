#include <iostream>
#include "Matrix.h"
#include "Random.h"

int main(){

    int size = 2;
    Matrix matrix(size,size);
    for(int i = 0; i<size; ++i){
        for(int j=0; j<size; ++j)
            std::cout << matrix(i,j).row << "," << matrix(i,j).col  << std::endl;
    }

    std::cout << matrix.Lx << " " << matrix.Ly << std::endl; 

    
    Random* rnd_gen = Random::GetGenerator();

    double num = 0;

    for(int i=0; i<5; ++i){
        num = rnd_gen->GenerateGauss(1,0.5);
        std::cout << num << std::endl;
    }

    return 0;
}
