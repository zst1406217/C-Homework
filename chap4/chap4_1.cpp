#include <iostream>
using namespace std;
class Matrix
{
public:
    void print()
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    Matrix(int flag)
    {
        if (flag == 1)
        {
            for (int j = 0; j < 4; j++)
            {
                for (int k = 0; k < 4; k++)
                {
                    cin >> matrix[j][k];
                }
            }
        }
    }
    Matrix()
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                matrix[j][k] = 1;
            }
        }
    }

private:
    int matrix[4][4];
};

int main()
{
    Matrix mymatrix1, mymatrix2(1);
    mymatrix1.print();
    cout << endl;
    mymatrix2.print();
}