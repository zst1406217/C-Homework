#include <iostream>
using namespace std;
class Matrix
{
public:
    friend ostream &operator<<(ostream &, Matrix &);
    friend istream &operator>>(istream &, Matrix &);
    Matrix operator+(Matrix &);
    friend Matrix operator-(Matrix &, Matrix &);

private:
    int a[3][3];
};
istream &operator>>(istream &input, Matrix &matrix)
{
    cout << "input number in Matrix 3*3:";
    input >> matrix.a[0][0] >> matrix.a[0][1] >> matrix.a[0][2] >> matrix.a[1][0] >> matrix.a[1][1] >> matrix.a[1][2] >> matrix.a[2][0] >> matrix.a[2][1] >> matrix.a[2][2];
    return input;
}
ostream &operator<<(ostream &output, Matrix &matrix)
{
    output << "[" << matrix.a[0][0] << " " << matrix.a[0][1] << " " << matrix.a[0][2] << endl;
    output << " " << matrix.a[1][0] << " " << matrix.a[1][1] << " " << matrix.a[1][2] << endl;
    output << " " << matrix.a[2][0] << " " << matrix.a[2][1] << " " << matrix.a[2][2] << "]" << endl;
    return output;
};
Matrix Matrix::operator+(Matrix &matrix)
{
    Matrix ans;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ans.a[i][j] = a[i][j] + matrix.a[i][j];
        }
    }
    return ans;
};
Matrix operator-(Matrix &matrix1, Matrix &matrix2)
{
    Matrix ans;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ans.a[i][j] = matrix1.a[i][j] - matrix2.a[i][j];
        }
    }
    return ans;
}
int main()
{
    Matrix mat1, mat2, mat3, mat4;
    cin >> mat1 >> mat2;
    cout << mat1 << mat2;
    mat3 = mat1 + mat2;
    cout << mat3;
    mat4 = mat1 - mat2;
    cout << mat4;
}