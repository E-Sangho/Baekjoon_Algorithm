#include <iostream>
#include <vector>

using namespace std;

vector<vector<long long>> matrix_multi(vector<vector<long long>> A, vector<vector<long long>> B)
{
    long long length = A.size();
    vector<vector<long long>> temp(length, vector<long long>(length));
    for(long long i = 0; i < length; ++i)
    {
        for(long long j = 0; j < length; ++j)
        {
            long long term = 0;
            for(long long k = 0; k < length; ++k)
            {
                term += A[i][k] * B[k][j];
            }
            temp[i][j] = (term % 1000);
        }
    }
    return temp;
}

vector<vector<long long>> power(vector<vector<long long>> A, long long n, long long B)
{
    vector<vector<long long>> I(n, vector<long long>(n));
    for(long long i = 0; i < n; ++i)
    {
        I[i][i] = 1;
    }
    if(B == 0) return I;
    vector<vector<long long>> temp = power(A, n, B / 2);
    temp = matrix_multi(temp, temp);
    if(B % 2 != 0)
    {
        temp = matrix_multi(temp, A);
    }
    return temp;
}

void print(vector<vector<long long>> A)
{
    int n = A.size();
    for(long long i = 0; i < n; ++i)
    {
        for(long long j = 0; j < n; ++j)
        {
            cout << A[i][j] << ' ';
        }
        cout << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long N, B;
    cin >> N >> B;
    vector<vector<long long>> m(N, vector<long long>(N));

    for(long long i = 0; i < N; ++i)
    {
        for(long long j = 0; j < N; ++j)
        {
            cin >> m[i][j];
        }
    }
   
    print(power(m, N, B));

}