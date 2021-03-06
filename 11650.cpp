#include <stdio.h>
#include <algorithm>
#include <vector>

class Point
{
public:
    int x;
    int y;

    Point(const int &x_input, const int &y_input)
    {
        x = x_input;
        y = y_input;
    }
};

bool compare(Point &a, Point &b){
    if(a.x == b.x) return a.y < b.y;
    else  return a.x < b.x;
}

int main(){
    int N;
    scanf("%d", &N);
    std::vector<Point> p;
    int x, y;
    for(int i = 0; i < N; ++i){
        scanf("%d %d", &x, &y);
        p.push_back(Point(x,y));
    }
    sort(p.begin(), p.end(), compare);
    for(int i = 0; i < N; ++i){
        printf("%d %d\n", p[i].x, p[i].y);
    }
}