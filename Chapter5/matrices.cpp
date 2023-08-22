
#include <vector>

// to pass in a matrix, you have to specify the number of rows, as well as number of columns
// for 2D arrays, you have to pass in the number of columns (which is the number of elements of each row) for the compiler
// this severely limits matrices
int matSum(int mat[][4], int numRows, int numCols)
{
    int sum = 0;
    for(int i = 0; i < numRows; i++)
    {
        for(int j = 0; j < numRows; j++)
        {
            sum += mat[i][j];
        }
    }
}

int main() {

    // displaying the limitations of C++ 2D arrays
    int mat[3][4] = { {8,1,7,-2}, {0,-3,4,6}, {-10,-14,1,0} };
    int sum = matSum(mat, 3, 4);

    // implementing the STL vector as a savior
    // store elements in a vector of vectors
    std::vector<std::vector<int> > matrix = { {8,1,7,-2}, {0,-3,4,6}, {-10,-14,1,0} };
        // don't put the > > operators in succession, otherwise the compiler will confuse it for the stream input operator >>
}