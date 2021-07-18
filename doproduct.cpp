#include <iostream>
#include <functional> //for std::hash
#include <string>
#include <random>

#include <vector>
#include <random>
#define n 1769
using namespace std;
std::random_device rd;  
std::mt19937 gen(rd()); 
std::uniform_int_distribution<> distrib(100, 10000);
int dotProduct(vector<int> vect_A, vector<int> vect_B)
{
 
    int product = 0;
 
    // Loop for calculate cot product
    for (int i = 0; i < n; i++){
 
        product = product + vect_A[i] * vect_B[i];
      }

        return product;
  
}
int generateRandomInt(){

  return distrib(gen);
}
int main() {
vector<int> a;
vector<int> b;

    for(int i = 1; i <= 1769; ++i) {



a.push_back(generateRandomInt());

b.push_back(generateRandomInt());
}

cout << dotProduct(a,b) << "\n";



}