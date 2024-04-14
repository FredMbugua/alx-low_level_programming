#include <stdio.h>
#include "main.h"

char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int carry = 0;
    int max_len = len1 > len2 ? len1 : len2;
    int sum, i, j;
    
    if (max_len + 1 > size_r) {
        return 0; // Result cannot be stored in r
    }
    
    r[max_len + 1] = '\0'; // Null-terminate the result string
    
    for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--) {
        int digit1 = i >= 0 ? n1[i] - '0' : 0;
        int digit2 = j >= 0 ? n2[j] - '0' : 0;
        sum = digit1 + digit2 + carry;
        carry = sum / 10;
        r[max_len--] = (sum % 10) + '0';
    }
    
    if (carry) {
        if (max_len + 1 <= size_r) {
            r[max_len] = carry + '0';
            return r;
        } else {
            return 0; // Result cannot be stored in r
        }
    } else {
        return r + 1; // Return pointer to the start of the result (skip leading zero)
    }
}

