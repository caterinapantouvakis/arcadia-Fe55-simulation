#include "Matrix.h"

float Matrix::Lx = 0;
float Matrix::Ly = 0;

Matrix::Matrix(unsigned int rows, unsigned int cols):
fNrows(rows), fNcols(cols){

    // create the matrix as a 1D array of rows times cols pixels
    matrix = new Pixel[fNrows*fNcols];

    Matrix::Ly = fNrows * Pixel::pitch;
    Matrix::Lx = fNcols * Pixel::pitch;

    SetCoordinates();

}

Matrix::~Matrix(){
    delete matrix;
}

Pixel& Matrix::operator()(unsigned int row, unsigned int col){
    return matrix[col*fNrows + row];
}

void Matrix::SetCoordinates(){

    for(unsigned int r=0; r<fNrows; ++r){
        for(unsigned int c=0; c<fNcols; ++c){
            matrix[c*fNrows + r].row = r;
            matrix[c*fNrows + r].col = c;
        }
    }

    return;
}