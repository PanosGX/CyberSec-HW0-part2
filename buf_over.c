#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int pass = 0;
    char buffer[10];

    if (argc < 2)
    {
        printf("Run program with a second argument\n");
        printf("Like: ./buf_over Good Moring\n");
        return 1;
    }

    strcpy(buffer, argv[1]);

    if (pass != 0)
    {
        printf("WOW GG well done \n");
    }
    else
    {
        printf("Not quite, maybe try a bigger input\n");
    }

    return 0;
}