#include<stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int a;
    // Use printf for prompting the user
    printf("Enter number: ");
    // Correct scanf syntax
    scanf("%d", &a);
    
    // Print the result
    printf("Sum: %d\n", add(a, a));
    return 0;
}
