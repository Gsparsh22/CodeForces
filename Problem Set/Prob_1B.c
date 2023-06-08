#include <stdio.h>
#include <string.h>
#include <ctype.h>

const int MAX_INPUTS = 100000;
const int MAX_INPUT_LENGTH = 25;
const int MAX_OUTPUT_LENGTH = 10;

void excelToRxCy(char excel[], char rxCy[]) {
    int row = 0, col = 0, i = 0, j = 0;
    while (isalpha(excel[i])) {
        col = col * 26 + excel[i] - 'A' + 1;
        i++;
    }
    while (isdigit(excel[i])) {
        row = row * 10 + excel[i] - '0';
        i++;
    }
    sprintf(rxCy, "R%dC%d", row, col);
}

void rxCyToExcel(char rxCy[], char excel[]) {
    int row = 0, col = 0, i = 1;
    while (isdigit(rxCy[i])) {
        row = row * 10 + rxCy[i] - '0';
        i++;
    }
    while (rxCy[i]) {
        col = col * 10 + rxCy[i] - '0';
        i++;
    }
    i = 0;
    while (col > 0) {
        int rem = col % 26;
        if (rem == 0) {
            excel[i++] = 'Z';
            col = col / 26 - 1;
        } else {
            excel[i++] = rem - 1 + 'A';
            col /= 26;
        }
    }
    excel[i] = '\0';
    strrev(excel);
    sprintf(excel + strlen(excel), "%d", row);
}

int main() {
    int n;
    scanf("%d", &n);
    char inputs[MAX_INPUTS][MAX_INPUT_LENGTH];
    char outputs[MAX_INPUTS][MAX_OUTPUT_LENGTH];
    for (int i = 0; i < n; i++) {
        scanf("%s", inputs[i]);
        if (inputs[i][0] == 'R' && isdigit(inputs[i][1])) {
            rxCyToExcel(inputs[i], outputs[i]);
        } else {
            excelToRxCy(inputs[i], outputs[i]);
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%s\n", outputs[i]);
    }
    return 0;
}