#include <stdbool.h>
#include "main.h"

int _atoi(char *str)
{
    int i = 0, val = 0;
    bool isNegative = false;
    
    for (; str[i] != '\0'; i++) 
    {
        if (str[i] == '-')
        {
            isNegative = !isNegative;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            val = (val * 10) + (str[i] - '0');
        }
        else if (val > 0)
        {
            break;
        }
    }
    val = isNegative ? val * -1 : val;
    return (val);
}
