#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void findHashPositions(const vector<vector<char>>& matrix, vector<int>& row_indices, vector<int>& col_indices) {
    int n = matrix.size();
    if (n == 0) return;
    int m = matrix[0].size();

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] == '#') {
                row_indices.push_back(i);
                col_indices.push_back(j);
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> matrix(n, vector<char>(m));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    vector<int> row_indices, col_indices;
    findHashPositions(matrix, row_indices, col_indices);

    int num_hashes = row_indices.size();
    int hash_row[num_hashes], hash_col[num_hashes];
    for (int i = 0; i < num_hashes; ++i) {
        hash_row[i] = row_indices[i];
        hash_col[i] = col_indices[i];
    }

    sort(hash_row, hash_row + num_hashes);
    sort(hash_col, hash_col + num_hashes);

    int x_min = hash_row[0] + 1;
    int y_min = hash_col[0] + 1;
    int x_max = hash_row[num_hashes - 1] + 1;
    int y_max = hash_col[num_hashes - 1] + 1;

    //cout << x_min << " " << y_min << " " << x_max << " " << y_max << endl;
    cout << (x_min + x_max) / 2 << " " << (y_min + y_max) / 2 << endl;
    }
    return 0;
}
