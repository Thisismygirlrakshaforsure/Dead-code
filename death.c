#include <stdio.h>

int add(int a, int b) {
    return a + b;
    printf("This will never execute!\n");  // Dead code
}

int main() {
    int x = 5, y = 10;
    int result = add(x, y);
    
    if (0) {  // This block will never run
        printf("This is dead code!\n");
    }

    return 0;
}
