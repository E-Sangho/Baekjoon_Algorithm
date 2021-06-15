#include <stdio.h>

// merge() is a function that combine splited L-array and R-array into the one array;
void merge(int *arr, int *sorted, int &start, int &middle, int &end){
    int l = start;
    int r = middle + 1;
    int i = start;

    while(l <= middle && r <= end){
        if(arr[l] > arr[r]){
            sorted[i] = arr[r];
            ++i;
            ++r;
        }
        else{
            sorted[i] =  arr[l];
            ++i;
            ++l;
        }
    }

    if(l > middle){
        while(r <= end){
            sorted[i] = arr[r];
            ++i;
            ++r;
        }
    }
    else{
        while(l <= middle){
            sorted[i] = arr[l];
            ++i;
            ++l;
        }
    }
    for(int k = start; k <= end; ++k){
        arr[k] = sorted[k];
    }
}

// merge-sort() is a function that splite the array and combine them again to use merge();
void merge_sort(int *arr, int *sorted, int &begin, int &end){
    if(begin < end){
        int center = (end +  begin) / 2;
        int center2 = center + 1;
        merge_sort(arr, sorted, begin, center);
        merge_sort(arr, sorted, center2, end);
        merge(arr, sorted, begin, center, end);
    }
}

int main(){
    int N;
    int begin = 0;
    scanf("%d", &N);
    int arr[N];
    int sorted[N];
    for(int i = 0; i < N; ++i){
        scanf("%d", &arr[i]);
    }
    int end = N - 1;
    merge_sort(arr, sorted, begin, end);

    for(int i = 0; i < N; ++i){
        printf("%d\n", arr[i]);
    }
}