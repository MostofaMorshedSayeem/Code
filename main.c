#include <stdio.h>
#include <string.h>

int main() {

    int n, X = 0;
    scanf("%d", &n);

    char expression[7];

    for(int i = 0; i < n; i++) {
        scanf("%s", expression);
        if( strstr(expression, "++")) {
            X++;
        } else if (strstr(expression, "--")) {
            X--;
        }
    }
    printf("%d\n", X);
    return 0;
}