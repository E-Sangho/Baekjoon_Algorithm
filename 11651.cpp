#include <stdio.h>
#include <algorithm>
#include <vector>

class Point{
private:
    int x;
    int y;
public:
    Point(const int &x_input, const int &y_input){
        x = x_input;
        y = y_input;
    }

    const int getx(){
        int a = x;
        return a;
    }

    const int gety(){
        int b = y;
        return b;
    }
};

bool compare(Point &a, Point &b){
    if(a.gety() == b.gety()) return a.getx() < b.getx();
    else return a.gety() < b.gety();
}

int main(){
    int N;
    scanf("%d", &N);
    int x = 0, y = 0;
    std::vector<Point> p;
    for(int i = 0; i < N; ++i){
        scanf("%d %d", &x, &y);
        p.push_back(Point(x,y));
    }
    sort(p.begin(), p.end(), compare);
    for(int i = 0; i < N; ++i){
        printf("%d %d\n", p[i].getx(), p[i].gety());
    }
}