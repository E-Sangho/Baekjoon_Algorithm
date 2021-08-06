#include <iostream>

using namespace std;

class Heap
{
private:
    int heap[100001];
    int heap_count;
public:
    Heap() {
        heap_count = 0;
    }
    bool empty();
    int top();
    void pop();
    void push(const int &a);
    void heapify(int i);

};

bool Heap::empty()
{
    return heap_count == 0;
}

int Heap::top()
{
    return heap[0];
}

void Heap::pop()
{
    heap[0] = heap[--heap_count];
    heapify(0);
}

void Heap::push(const int &a)
{
    heap[heap_count++] = a;
    for(int i = heap_count - 1; i > 0;){
        int parent = (i - 1) >> 1;
        if(heap[parent] < heap[i]) break;
        swap(heap[parent], heap[i]);
        i = parent;
    }
}

void Heap::heapify(int i)
{
    int min = i;
    int left = 2*i + 1;
    int right = 2*(i + 1);
    if(left < heap_count && heap[min] > heap[left]){
        min = left;
    }
    if(right < heap_count && heap[min] > heap[right]){
        min = right;
    }
    if(min != i){
        swap(heap[min], heap[i]);
        heapify(min);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Heap H;
    int N, temp, ans = 0;
    cin >> N;
    for(int n = 0; n < N; ++n){
        cin >> temp;
        H.push(temp);
    }
    for(int n = 0; n < N - 1; ++n){
        int first = H.top();
        H.pop();
        int second = H.top();
        H.pop();
        ans += first + second;
        H.push(first + second);
    }
    cout << ans;
    return 0;
}