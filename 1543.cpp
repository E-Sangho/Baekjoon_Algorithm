#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string document, search;
    getline(cin, document);
    getline(cin, search);
    int s_len = search.length(), jump = -1, d_len = document.length(), ans = 0;
    bool flag = true;
    for(int i = 1; i < s_len; ++i){
        if(search[0] == search[i]){
            jump = i;
            break;
        }
    }
    for(int i = 0; i < d_len;){
        for(int j = 0; j < s_len; ++j){
            if(document[i+j] != search[j]){
                if(j <= 1) ++i;
                else if(jump == -1 || j < jump) i += j;
                else i += jump;
                flag = false;
                break;
            }
        }
        if(flag){
            ++ans;
            i += s_len;
        }
        flag = true;
    }

    cout << ans;
    return 0;
}