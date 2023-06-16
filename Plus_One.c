#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int *ls = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &ls[i]);
    }
    char *s = malloc(n * sizeof(char));
    for (int i = 0; i < n; i++) {
        sprintf(&s[i], "%d", ls[i]);
    }
    int num = atoi(s) + 1;
    sprintf(s, "%d", num);
    for (int i = 0; s[i] != NULL; i++) {
        printf("%c ", s[i]);
    }
    free(ls);
    free(s);
    return 0;
}
