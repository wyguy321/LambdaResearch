#include <iostream>
#include <functional> //for std::hash
#include <string>
#include <random>
std::string random_string()
{
     std::string random_string = "";
    for(int i = 1; i <= 50; ++i) {
     std::string str("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");

     std::random_device rd;
     std::mt19937 generator(rd());

     std::shuffle(str.begin(), str.end(), generator);
     random_string += str.substr(0, 20);
 }
 std::cout << random_string << "RANDOM STRING\n";
 std::cout << random_string.length() << "RANDOM STRING LENGTH\n";
     return random_string;    // Returns a random string of 1K        
}
int main() {
  //Hasing a string of 1K, 1769 times.
    for(int i = 1; i <= 1769; ++i) {
          std::string str = random_string();
    std::hash<std::string> hasher;
    auto hashed = hasher(str); //returns std::size_t
    std::cout << hashed << '\n'; //outputs 2146989006636459346 on my machine

}
}