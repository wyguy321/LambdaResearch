#include <iostream>
#include <random>
#include <limits>
using namespace std;

void factorial(int n){
 unsigned long long int fact = 1;
std::random_device rd;  //Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    std::uniform_int_distribution<> distrib(100, 10000);

        for(int i = 1; i <= n; ++i) {
            //factorial *= i;
            
            unsigned long long int randomInt = distrib(gen);
            cout << "RANDOM NUMBER.." << randomInt << "\n\n"; 

            fact *= randomInt;

             cout << "FACTORIAL.." << fact << "\n\n"; 
        }
        cout << "Factorial of " << n << " = " << fact;  


}


int main() {
    int n = 1769;

   factorial(n);
   

    return 0;
}