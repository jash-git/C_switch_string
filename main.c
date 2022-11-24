#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BADKEY -1
#define A1 1
#define A2 2
#define B1 3
#define B2 4
#define NKEYS (sizeof(lookuptable)/sizeof(t_symstruct))

typedef struct { char *key; int val; } t_symstruct;

t_symstruct lookuptable[] = {
    { "A1", A1 }, { "A2", A2 }, { "B1", B1 }, { "B2", B2 }
};

int keyfromstring(char *key)
{
    int i;
    for (i=0; i < NKEYS; i++) {
        t_symstruct sym = lookuptable[i];
        if (strcmp(sym.key, key) == 0)
            return sym.val;
    }
    return BADKEY;
}

void Pause()
{
    printf("Press Enter key to continue...");
    fgetc(stdin);
}

int main()
{
    printf("Hello, World!\n");
    switch (keyfromstring("A1"))
    {
        case A1:
            printf("A1!\n");
            break;
        case A2:
            break;
        case B1:
            break;
        case B2:
            break;
        case BADKEY:
            break;
    }
    Pause();
    return 0;
}
