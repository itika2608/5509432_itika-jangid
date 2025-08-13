#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    char text[size + 1];
    scanf("%s", text);

    int k;
    scanf("%d", &k);

    k = k % 26;

    for (int i = 0; text[i] != '\0'; i++) {
        char c = text[i];

        if (c >= 'A' && c <= 'Z') {
            c = c - 'A';        
            c = (c + k) % 26;   
            c = c + 'A';        
        }
        
        else if (c >= 'a' && c <= 'z') {
            c = c - 'a';
            c = (c + k) % 26;
            c = c + 'a';
        }

        text[i] = c;
    }

    printf("%s\n", text);
    return 0;
}
