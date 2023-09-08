#include <stdbool.h>
bool IsLeapYear(int year) {
    // Check if the year is divisible by 4
    if (year % 4 == 0) {
        // If the year is divisible by 100, it should also be divisible by 400
        if (year % 100 == 0) {
            return year % 400 == 0;
        } else {
            return true;
        }
    } else {
        return false;
    }
}