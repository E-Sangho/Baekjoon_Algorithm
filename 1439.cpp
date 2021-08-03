#include <iostream>
#include <string>

using namespace std;

int main(){
    int cnt1 = 0, cnt2 = 0;
    string S;
    char c;
    cin >> S;
    bool flag = true;
    int n = S.length();
    for(int i = 0; i < n;){
        c = S[i];
        while(c == S[i] && i < n)
        {
            ++i;
        }
        if(flag){
            ++cnt1;
            flag = false;
        }
        else{
            ++cnt2;
            flag = true;
        }
    }
    cout << (cnt1 < cnt2 ? cnt1 : cnt2); 
    return 0;
}