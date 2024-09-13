//Test Average -> program that asks for five test scores.
#include <iostream>
#include <iomanip>

int main(){
    //five test scores
    double test_score_1, test_score_2, test_score_3, test_score_4, test_score_5;
    int number_test_score = 5;

    std::cout << "First test score: ";
    std::cin  >> test_score_1;

    std::cout << "Second test score: ";
    std::cin >> test_score_2;

    std::cout << "Third test score: ";
    std::cin >> test_score_3;

    std::cout << "Fourth test score: ";
    std::cin >> test_score_4;

    std::cout << "Fith test score: ";
    std::cin >> test_score_5;

    double average_test_score = (test_score_1 + test_score_2 + test_score_3 + test_score_4 + test_score_5)/ number_test_score;

    std::cout << std::setprecision(1) << std::fixed;
    std::cout << "The average test scores is: ";
    std::cout << average_test_score;
    std::cout << std::endl;

    return 0;
}