#include <iostream>

int main(){
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    
    for(int i = 0; i < T; ++i){
        int H = 0, W = 0, N = 0;
        cin >> H >> W >> N;
        int floor = 0, room = 0;
        floor = (N + (H - 1)) % H  + 1;
        room  = (N - 1) / H + 1; 
        int num =  floor * 100 + room;
        cout << num << "\n";
    }
}


/* 
 *  H01 H02     HW
 *  ...
 *  301
 *  201 202     2W
 *  101 102 ... 1W
 * 
 *  n(mod H)             :  0 ~ H - 1, n = 1 -> 1
 *  n(mod H) + 1         :  1 ~ H    , n = 1 -> 2
 *  n + H - 1(mod H) + 1 :  0 ~ H - 1, n = 1 -> 1
 */ 