#ifndef CONVOLUTION_H_10122020
#define CONVOLUTION_H_10122020

#include <vector>
void printVector(const std::vector<double> &vect);
std::vector<double> applyConvolution(std::vector<double> x, std::vector<double> w, bool pack_with_zeros);

#endif