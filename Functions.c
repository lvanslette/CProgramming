#include <stdio.h>

// note if blorf is defined above here it doesn't need a prototype (seen below) 
void blorf(void);

int main()
{
    puts("main function runs first");
    blorf();
    puts("Thanks, blorf()");
    return 0;
}

void blorf(void)
{
    puts("soup!");
}