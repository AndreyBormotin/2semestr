#include <iostream>
using namespace std;
class matrix; // прототип класса matrix
class vect
{
    int* p;
    int size;
public:
    vect(int s = 0)
    {
        p = new int[s];
        for (int i = 0; i < s; i++)
            p[i] = 0;
        size = s;
    }
    void in(void)
    {
        for (int i = 0; i < size; i++)
        {
            cout << "vect[" << i << "] = ";
            cin >> p[i];
        }
    }
    void out(void)
    {
        cout << "vect: ";
        for (int i = 0; i < size; i++)
            cout << p[i] << " ";
    }
    friend vect mult(const vect&, const matrix&);
};
class matrix
{
    int** base;
    int column_size, row_size;
public:
    matrix(int row = 0, int col = 0)
    {
        base = new int* [row];
        for (int i = 0; i < row; i++)
        {
            base[i] = new int[col];
            for (int j = 0; j < col; j++)
                base[i][j] = 0;
        }
        column_size = col;
        row_size = row;
    }
    void in(void)
    {
        for (int i = 0; i < row_size; i++)
            for (int j = 0; j < column_size; j++)
            {
                cout << "matrix[" << i << "][" << j << "] = ";
                cin >> base[i][j];
            }
    }
    void out(void)
    {
        cout << "matrix: " << endl;
        for (int i = 0; i < row_size; i++)
        {
            for (int j = 0; j < column_size; j++)
                cout << base[i][j] << " ";
            cout << endl;
        }
    }
    friend vect mult(const vect&, const matrix&);
};
vect mult(const vect& v, const matrix& m)
{
    int i, j;
    vect rez(m.column_size);
    if (v.size != m.row_size)
    {
        cout << "No rezult " << endl;
        return(rez);
    }
    for (j = 0; j < m.row_size; j++)
    {
        rez.p[j] = 0;
        for (i = 0; i < m.row_size; i++)
            rez.p[j] += v.p[i] * m.base[i][j];
    }
    return(rez);
}
int main()
{
    vect v(3);
    matrix m(3, 2);
    v.in();
    m.in();
    v.out();
    cout << endl;
    m.out();
    vect r = mult(v, m);
    r.out();
    cin.get(); cin.get();
    return 0;
}