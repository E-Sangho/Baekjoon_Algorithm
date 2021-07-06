#include <iostream>
#include <vector>

using namespace std;

int print(const vector<int> &h, const int &n)
{
    int area = 0, height = 1000000001, width = 0;

    for(int i = 0; i < n; ++i)
    {
        if(h[i] < height)
        {
            height = h[i];
            ++width;
            if(area < h[i] * (width + 1))
            {
                area = height * width;
            }
        }
        else
        {
            if(area <= height * (width + 1))
            {
                ++width;
                area = height * width;
            }
            else
            {
                
            }
        } 
    }
    return area;
}


int main()
{
    int n = 0;
    while(true)
    {
        cin >> n;
        if(n == 0) break;
        vector<int> h(n);
        for(int i = 0; i < n; ++i)
        {
            cin >> h[i];
        }
        cout << '\n' << print(h,n);
    }
    return 0;
}