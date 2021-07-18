#include <iostream>
//#include <gmpxx.h>
#include<gmp.h>
#include <random>
#include <limits>
using namespace std;


mpz_class fact(unsigned int n){
                

mpz_class result(n);

std::random_device rd;  
std::mt19937 gen(rd()); 
std::uniform_int_distribution<> distrib(100, 10000);
int signedForLoopInt = (int) n;
        for(int i = 1; i <= signedForLoopInt; ++i) {            
            unsigned int randomInt = distrib(gen);
             mpz_class randomINT(randomInt);
            cout << "RANDOM NUMBER.." << randomInt << "\n\n"; 

            result *= randomINT;

             cout << "FACTORIAL.." << result << "\n\n"; 
        }
        cout << "Factorial of " << n << " = " << result;  

        return result;

}
int main()
{
        mpz_class result = fact(1769);
        std::cout << result << std::endl;
}