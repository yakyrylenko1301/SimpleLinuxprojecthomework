#include <stdio.h>
#include "function.h"

void  hello(void)
{
    printf("%s\n", get_msg());   
}




int main(void)
{
    hello();
    hello();
    hello();
    return 0;
}
