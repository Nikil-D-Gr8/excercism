#include "difference_of_squares.h"


unsigned int sum_of_squares(unsigned int number){
    unsigned int squares_sumed = 0;
        for (unsigned int x = 0; x <= number; x++){
            squares_sumed = squares_sumed + x * x;
            }
        return squares_sumed;
    }
unsigned int square_of_sum(unsigned int number){
    unsigned int sum_squared = 0;
        sum_squared  = ((number)*(number+1))/ 2;
        return sum_squared*sum_squared;
    }
unsigned int difference_of_squares(unsigned int number){
    return square_of_sum(number) - sum_of_squares(number);
}