#include <stdio.h>

int main() {
    int totalPages, targetPage;
    scanf("%d", &totalPages);
    scanf("%d", &targetPage);

    
    int fromFront = targetPage / 2;

    
    int fromBack = (totalPages / 2) - (targetPage / 2);

    
    int minTurns;
    if (fromFront < fromBack) {
        minTurns = fromFront;
    } else {
        minTurns = fromBack;
    }

    printf("%d\n", minTurns);

    return 0;
}