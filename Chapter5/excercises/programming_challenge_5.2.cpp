//Characters for the ASCII Codes
#include <iostream>
#include <iomanip>

int main(){
   /*   int var = 0;
    std::cout << (char)var << std::endl;
    unsigned char letter = 0, ascii = 1;
    int count = 0;

    std::cout << letter << std::endl;
    std::cout << ascii << std:: endl;

    Working Code: -> 
    for (int i = 0; i < 128; ++i) {
        std::cout << (char) i << " ";
        if ((i + 1) % 16 == 0)
            std::cout << std::endl;
    }
*/
    unsigned char letter;
    int count = 0;


    for(letter = 0; letter <= 16; letter++, count++){
        if(count == 16){
            std::cout << std::endl;
            count = 0;
        }

        else    std::cout << letter << " ";
    }

    std::cout << std::endl;

    return 0;
}