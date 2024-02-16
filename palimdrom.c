// this code show you about a palimdrom 
#include<stdio.h>

int main() {
    int n, k, r = 0;
    printf("Enter the value: ");
    scanf("%d", &n);
    int o = n;
    while (n != 0) {
        k = n % 10;
        r = r * 10 + k;
        n = n / 10;
    }
    if (o == r) {
        printf("The number is a palindrome.\n");
    } else {
        printf("This number is not a palindrome.\n");
    }
    
    return 0;
}