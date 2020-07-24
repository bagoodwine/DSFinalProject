#include "../classes/hash.h"

int main(){
    std::cout << "----- Test 1 -----" << std::endl;
    std::string message = " ";
    std::cout << "Initial input string: " << message << std::endl;
    /*
    std::vector<unsigned long> block;
    block = convert_to_binary(message);
    block = pad_to_512bits(block);
    block = resize_block(block);
    std::string result = hash_compute(block);
    */
    std::string result = hash(message);
    std::cout << "SHA-256 Hashed string: " << result << std::endl << std::endl;

    std::cout << "----- Test 2 -----" << std::endl;
    std::string m = "Hello!";
    std::cout << "Initial input string: " << m << std::endl;
    std::string n = hash(m);
    std::cout << "SHA-256 Hashed string: " << n << std::endl << std::endl;

    std::cout << "----- Test 3 -----" << std::endl;
    std::string p = "Receiver: Obi-Wan Kenobi!";
    std::cout << "Initial input string: " << p << std::endl;
    std::string q = hash(p);
    std::cout << "SHA-256 Hashed string: " << q << std::endl << std::endl;

    std::cout << "----- Test 4 -----" << std::endl;
    std::string x = "Obi-Wan Kenobi! Luke Skywalker $44.56 5/4/2020";
    std::cout << "Initial input string: " << x << std::endl;
    std::string y = hash(x);
    std::cout << "SHA-256 Hashed string: " << y << std::endl << std::endl;

    return 0;
}
