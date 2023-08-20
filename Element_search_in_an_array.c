#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int se;
    scanf("%d", &se);
    int found = 0;
    for (j = 0; j < n; j++) {
        if (se == a[j]) {
            found = 1;
            break; 
        }
    } 
    if (found) {
        printf("True
");
    } else {
        printf("False
");
    }
    
    return 0;
}
