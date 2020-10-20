#include <stdio.h>


/*

    multidimensional array:
            column 0  column 1  column 2  column 3  column 4
           --------------------------------------------------
    row 0 | x[0][0] | x[0][1] | x[0][2] | x[0][3] | x[0][4] |
          |---------|---------|---------|---------|---------|
    row 1 | x[1][0] | x[1][1] | x[1][2] | x[1][3] | x[1][4] |
          |---------|---------|---------|---------|---------|
    row 2 | x[2][0] | x[2][1] | x[2][2] | x[2][3] | x[2][4] |
          ---------------------------------------------------
 */
int iMultiDimArray [4][5] ={
        {1,   2,  3,  4,  5},
        {6,   7,  8,  9, 10},
        {11, 12, 13, 14, 15},
        {21, 52, 43, 34, 25},
};


int showMyArray();

int main(int argc, char **argv) {

    showMyArray();
}


int showMyArray() {
    int iRow;
    int iColumn;

    /*
        How to get the size of column:
        want to divide the length of one row,  eg: sizeof(iMultiDimArray[0])
        by the size of one element of that row eg: sizeof(iMultiDimArray[0][0])
        =
        int iColumnLen = sizeof(iMultiDimArray[0]) / sizeof(iMultiDimArray[0][0]);
     */
    int iRowLen = sizeof(iMultiDimArray) / sizeof(iMultiDimArray[0]);
    int iColumnLen = sizeof(iMultiDimArray[0]) / sizeof(iMultiDimArray[0][0]);

    printf("\nThe array have %d rows and %d columns each:\n", iRowLen, iColumnLen);

    // Loop thorough the multi-array
    for (iRow = 0; iRow < iRowLen; iRow++){
        printf("\n--- Row %d --- \n", iRow +1);
        for (iColumn = 0; iColumn < iColumnLen; iColumn++) {
            printf("Column[%d], value = %d\n", iColumn, iMultiDimArray[iRow][iColumn]);
        }
    }
    return 0;



}
