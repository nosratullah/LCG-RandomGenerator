#include <iostream>
#include <fstream>
#include <string>
#include <array>

int main() {
  int length = 1000;
  int c = 1013904223;
  int a = 1664525;
  //to define m to 2 to the power of 31
  int m = 2;
  for (int i = 0; i < 30; i++) {
    m = m * 2;
  }
  int seed = 3;
  int randsX[length];
  int randsY[length];
  int randsZ[length];
  //If seed is too varied the surface will close together
  randsX[0] = seed;
  randsY[0] = seed+10;
  randsZ[0] = seed-10;
  for (int i = 0; i < length; i++) {
    randsX[i+1] = (a*randsX[i] + c) % m;
    randsY[i+1] = (a*randsY[i] + c) % m;
    randsZ[i+1] = (a*randsZ[i] + c) % m;
    //std::cout << randsX[i+1] << ',';
    //std::cout << randsY[i+1] << ',';
    //std::cout << randsZ[i+1] << '\n';
  }
  std::string newpath = "LCG.txt";
  std::ofstream newfile (newpath);
  if (newfile.is_open()){
    for (size_t i = 0; i < length; i++) {
      newfile << randsX[i+1] << ',';
      newfile << randsY[i+1] << ',';
      newfile << randsZ[i+1] << '\n';
      //newfile << histArray[i] << '\n' ;
    }
      std::cout << "Done." << '\n';
      newfile.close();
      newfile.clear();
    }
  return 0;
}
