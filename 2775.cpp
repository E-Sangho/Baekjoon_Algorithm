#include <iostream>

int main(){
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    scanf("%d", &T);

    int arr[15][15];
    for(int i = 0; i < 15; ++i){
        arr[0][i] = i + 1;
        arr[i][0] = 1;
    }
    for(int i = 1; i < 15; ++i){
        for(int j = 1; j < 15; ++j){
            arr[i][j] = arr[i][j-1] + arr[i-1][j];  
        }
    }

    for(int i = 0; i < T; ++i){
        int k, n;
        scanf("%d %d", &k, &n);
        printf("%d\n",arr[k][n-1]);
    }
}
