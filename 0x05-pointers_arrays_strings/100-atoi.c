#include "main.h"

/**
 * int _atoi - converts sting to int
 * @s: string to be coverted
 * Return: 0
 */

int _atoi(char *s)
{
    char str[] = "12345"; // Replace this with your desired input string
    int result = _atoi(str);
    
    printf("The integer value is: %d\n", result);
    
    return 0;


		int _atoi(char *s) {
		int result = 0;
		int sign = 1;

    while (*s == ' ' || *s == '\t' || *s == '\n')
        s++;
    if (*s == '-' || *s == '+') {
        if (*s == '-')
            sign = -1;
	s++
    }
    while (*s >= '0' && *s <= '9') {
        result = result * 10 + (*s - '0');
	s++
    return sign * result;
}

}
