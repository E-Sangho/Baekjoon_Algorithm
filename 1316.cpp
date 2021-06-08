#include <stdio.h>
#include <string.h>

int main(){
    /* There are three cases when we check each alphabet.
     * 1. First met but not a last letter.
     * 2. First met and last letter.
     * 3. Alread met
     * 
     * The case.1 We just do next iteration, because it's not a 
     * last so we can act on case.2.
     * 
     * The case.2 We 'mark' the letter was encountered.
     * 
     * The case.3 Erase the 'mark' which we've done on case.2
     */

    // get input N
    // For each iteration, get input[101] and alphabet[26] = {0}
    // If (alphabet[a[i] - 'a'] > 0), count = 0; break;
    // else If input[i] != input[i+1], alphabet[array[i] - 'a'] = 1
    // sum += count;
    
    int N = 0, sum = 0;
    scanf("%d", &N);
    for(int n = 0; n < N; ++n){
        char input[101];
        scanf("%s", input);
        int alphabet[26] = {0}, count = 1;
        int length = strlen(input);
        for(int i = 0; i < length; ++i){
            if(alphabet[input[i] - 'a'] > 0){
                count = 0;
                break;
            }
            else if(input[i] != input[i+1]){
                alphabet[input[i] - 'a'] = 1;
            }
        }
        sum += count;
    }
    printf("%d", sum);
}