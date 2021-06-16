#include <stdio.h>
#include <string.h>

void merge(int *arr, int *sorted, int start, int middle, int end){
    int l = start, r = middle + 1, i = start;
    while(l <= middle && r <= end){
        if(arr[l] < arr[r]){
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
    char arr[10];
    int ans[10];
    int sorted[10] = {0};

    scanf("%s", arr);
    int len = strlen(arr);
    for(int i = 0; i < len; ++i){
        ans[i] = (int)arr[i] - 48;
    }
    
    merge_sort(ans, sorted, 0, len - 1);

    for(int i = 0; i < len; ++i){
        printf("%d",ans[i]);
    }
}