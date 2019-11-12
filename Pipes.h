/**Struct that contains every pipe type*/
typedef struct{
    const char empty [4];

    const char plugUp[4];
    const char plugDown[4];
    const char plugLeft[4];
    const char plugRight[4];

    const char  twDownLeft[4];
    const char  twDownRight[4];
    const char  twUpLeft[4];
    const char  twUpRight[4];

    const char horizontal[4];
    const char vertical[4];

    const char trRightDownLeft[4];
    const char trUpLeftDown[4];
    const char trLeftUpRight[4];
    const char trUpRightDown[4];

    const char trAll[4];
} pipes;
/** Variables to catch from the file*/
int rows = 0;
int columns = 0;
int entries = 0;
int exits = 0;

pipes** buildMatrix(pipes** pipesMatrix, int rows, int columns);
pipes  **pipesMatrix;


