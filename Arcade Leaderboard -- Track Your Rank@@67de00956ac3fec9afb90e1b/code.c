#include <stdio.h>

void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]) {
    int ranks[n];
    ranks[0] = 1;
    for (int i = 1; i < n; i++) {
        if (ranked[i] == ranked[i - 1]) {
            ranks[i] = ranks[i - 1];
        } else {
            ranks[i] = ranks[i - 1] + 1; // Increment rank for unique values
        }
    }

    int index = n - 1;
    for (int i = 0; i < m; i++) {
        while (index >= 0 && player[i] >= ranked[index]) {
            index--;
        }
        result[i] = (index == -1) ? 1 : ranks[index] + 1;
    }
}

int main() {
    int n, m;
    scanf("%d", &n);
    int ranked[200000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ranked[i]);
    }
    scanf("%d", &m);
    int player[200000];
    for (int i = 0; i < m; i++) {
        scanf("%d", &player[i]);
    }
    int result[200000];
    trackPlayerRanks(ranked, n, player, m, result);
    for (int i = 0; i < m; i++) {
        printf("%d\n", result[i]);
    }
    return 0;
}