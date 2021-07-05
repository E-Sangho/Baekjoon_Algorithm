#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<long long>> matrix;
int p = 1000000007;
matrix I = {{1,0},{0,1}};
matrix m = {{1,1},{1,0}};

matrix operator *(matrix a, matrix b)
{
    
    matrix temp(2, vector<long long>(2));
    for(int i = 0; i < 2; ++i){
        for(int j = 0; j < 2; ++j){
            for(int k = 0; k < 2; ++k){
                temp[i][j] += a[i][k] * b[k][j];
            }
            temp[i][j] %= p;
        }
    }
    return temp;
}

matrix Fibonacci(const matrix a, long long n)
{
    if(n == 1) return m;
    matrix temp = Fibonacci(a, n / 2);
    temp = temp * temp;
    if(n % 2 != 0)
    {
        temp = temp * a;
    }
    return temp;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long N;
    cin >> N;
    
    cout << Fibonacci(m, N)[0][1];

}

/*
 * Fn = Fn-1 + Fn-2
 * Fn   Fn-1           (1 1) Fn-1  Fn-2 ... (1 1)^n-1  F2 F1  =  (1 1)^n
 * Fn-1 Fn-2           (1 0) Fn-2  Fn-3 ... (1 0)      F1 F0     (1 0)
 * 
 * 
 * 
 * 
 */