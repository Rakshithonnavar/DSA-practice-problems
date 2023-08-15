#include <stdio.h>
#include <string.h>
#include <algorithm>

int smallest_substring(char *str, char a, char b) {
    int len = strlen(str);
    int left = 0, right = 0;
    int min_len = len + 1;

    while (right < len) {
        if (str[right] == a || str[right] == b) {
            while (left <= right && (str[left] != a && str[left] != b)) {
                left++;
            }
            if (str[left] == a && str[right] == b) {
                min_len = min(min_len, right - left + 1);
            }
            left++;
        }
        right++;
    }

    return min_len == len + 1 ? -1 : min_len;
}

int main() {
    char str[] = "abacaba";
    char a = 'a';
    char b = 'b';
    int len = smallest_substring(str, a, b);
    printf("Length of smallest substring: %d\n", len);
    return 0;
}



















// //#include<stdlib.h>
// #include<stdio.h>
// #include<string.h>

 
// int smallest_substring(char *str, char a,char b){
//     int len = strlen(str);
//     int left = 0,right =0;
//     int min_len = len+1;
    

//     while(right<len){
//         if (str[right] == a || str[right] == b) {
//               while (left <= right && (str[left]!=a && str[left] !=b)){
//                 left++;
//               }
//               if(str[left] == a && str[right] == b){
//                 min_len = min(min_len,right - left +1);
//               }
//               left++;
//         }
//         right++;
//     }
//         return min_len == len + 1 ? -1 :min_len;
// }
// int main() {
//     char str[] = "abacaba";
//     char a = 'a';
//     char b = 'b';
//     int len = smallest_substring(str, a, b);
//     printf("Length of smallest substring: %d\n", len);
//     return 0;
// }


   
             