#include <stdio.h>
#include <string.h>

#define MAX_PLAYERS 1000

int main() {
    int n, i, score, max_score = 0;
    char name[33], winner[33];
    int player_scores[MAX_PLAYERS] = {0}; // Initialize all scores to 0
    
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s %d", name, &score);
        int j;
        for (j = 0; j < strlen(name); j++) {
            name[j] = tolower(name[j]); // Convert name to all lowercase letters
        }
        player_scores[name[0] - 'a'] += score; // Add score to the corresponding player
        if (player_scores[name[0] - 'a'] >= max_score) { // Check if current player has the highest score so far
            max_score = player_scores[name[0] - 'a'];
            strcpy(winner, name);
        }
    }
    printf("%s\n", winner); // Print the name of the winner
    
    return 0;
}