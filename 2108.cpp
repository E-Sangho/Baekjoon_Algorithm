#include <stdio.h>

void merge(int *arr, int *sorted, int start, int middle, int end){
    
    int l = start, r = middle + 1, i = start;
    
    while(l <= middle && r <= end){
        if(arr[l] > arr[r]){
            sorted[i] = arr[r];
            ++r;
        }
        else{
            sorted[i] = arr[l];
            ++l;
        }
        ++i;
    }

    if(l > middle){
        while(r <= end){
            sorted[i] = arr[r];
            ++r;
            ++i;
        }
    }
    else{
        while(l <= middle){
            sorted[i] = arr[l];
            ++l;
            ++i;
        }
    }

    for(int k = start; k <= end; ++k){
        arr[k] = sorted[k];
    }
}

void merge_sort(int *arr, int *sorted, int start, int end){
    if(start < end){
        int middle = (start + end) / 2;
        merge_sort(arr, sorted, start, middle);
        merge_sort(arr, sorted, middle + 1, end);
        merge(arr, sorted, start, middle, end);
    }
}

int main(){
    int N;
    scanf("%d", &N);
    int arr[N], sorted[500000] = {0}, min = 4000, max = -4000;
    int  count[8001] = {0}, max_count  = 0, check = 0, mode = 0;
    double mean = 0;

    for(int i = 0; i < N; ++i){
        scanf("%d", &arr[i]);
        mean += arr[i];
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
        ++count[arr[i] + 4000];
        if(count[arr[i] + 4000] > max_count) max_count = count[arr[i] + 4000];
    }

    for(int k = 0; k <= 8000; ++k){
        
        if(count[k] == max_count){
            ++check;
        }
    }

    for(int k = 0; k <= 8000; ++k){
        if(check == 1 && count[k] == max_count){
            mode = k - 4000;
            break;
        }
        else{
            if(count[k] == max_count){
                check = 1;
            }
        }
    }

    merge_sort(arr, sorted, 0, N - 1);

    // print arithmetic mean
    mean /= N;
    printf("%.0f\n", mean);

    // print median
    printf("%d\n", arr[N/2]);
    
    // print mode
    printf("%d\n", mode);
    
    // print range
    printf("%d\n", max - min);
}