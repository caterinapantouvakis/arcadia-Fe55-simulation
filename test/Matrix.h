#ifndef Matrix_h
#define Matrix_h

#include "Pixel.h"

class Matrix{

public:

    Matrix(unsigned int rows, unsigned int cols);
    ~Matrix();

    Pixel& operator()(unsigned int row, unsigned int col);

    float SetBaseline(float pixBaseline, unsigned int pixRow, unsigned int pixCol);
    float SetGain(float pixGain, unsigned int pixRow, unsigned int pixCol);

    // continuous matrix dimensions in um (per adesso)
    static float Lx;
    static float Ly;


private:

    const unsigned int fNrows;
    const unsigned int fNcols;

    Pixel* matrix;

    void SetCoordinates();   // set all the pixel coordinates


};



#endif

