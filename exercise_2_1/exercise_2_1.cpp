#include "convolution.h"
#include <vector>
#include <iostream>


void printVector(const std::vector<double> &vect) {
  std::cout << "{" << vect[0];
  for(int i = 1; i < vect.size(); i++) {
    std::cout << ", " << vect[i];
  }
  std::cout << "}" << std::endl;

}

std::vector<double> readInVector(std::string s) {
  int prev_location = 0;
  int next_location = 0;
  std::vector<double> result;
  while(s.find(',', prev_location) != std::string::npos) {
    next_location = s.find(',', prev_location);
    result.push_back(std::stod(s.substr(prev_location, next_location - prev_location)));
    next_location++;
    prev_location = next_location;
  }
  result.push_back(std::stod(s.substr(prev_location, std::string::npos)));
  return result;
}


int main() {

	std::vector<double> x;
	  std::vector<double> w;
	  

	  std::string s;
	  std::cin >> s;
	  std::cin >> s;
	  x = readInVector(s);
	  std::cin >> s;
	  w = readInVector(s);



	std::vector<double> y = applyConvolution(x,w,true);
	printVector(y);
	y = applyConvolution(x,w,false);
	printVector(y);


}
