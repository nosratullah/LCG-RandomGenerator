#include <iostream>
#include <fstream>
#include <string>
#include <array>
#include <random>
#include <cstdlib>

double power(double x, int power)
{
    double result;
    int i;
    result =1.0;
    for (i=1;i<=power;i++){
        result = result*x;
    }
    return result;
}

int seedFunc(int seed,int length) {
  int c = 12345;
  int a = 1103515245;
  //to define m to 2 to the power of 31
  int m = power(2,48)-1;
  int rands[length];
  for (int i = 0; i < length; i++) {
    rands[i+1] = (a*rands[i] + c) % m;
  }
  int randomPick;
  randomPick = rand() % length;
  return rands[randomPick];
}

int main() {
  //LCG random number method :
  int length = 1000;
  int c = 1013904223;
  int a = 1664525;
  //to define m to 2 to the power of 31
  int m = abs(power(2,31));
  int seed = 3;
  int randsX[length];
  int randsY[length];
  int randsZ[length];

  //Modefied LCG Model :
  randsX[0] = seedFunc(seed, 1000);
  randsY[0] = seedFunc(seed,1000);
  randsZ[0] = seedFunc(seed,1000);
  for (int i = 0; i < length; i++) {
    randsX[i+1] =abs((a*seedFunc(randsZ[i],1000) + c) % m) ;
    randsY[i+1] = abs((a*seedFunc(randsX[i],1000) + c) % m);
    randsZ[i+1] = abs((a*seedFunc(randsY[i],1000) + c) % m);
  }
  //The writing process :
  std::string newpath = "ModefiedLCG.txt";
  std::ofstream newfile (newpath);
  if (newfile.is_open()){
    for (int i = 0; i < length; i++) {
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
