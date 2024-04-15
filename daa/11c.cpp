#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// Function for Matrix Chain Multiplication
void matrix_chain_order(const vector<int>& p) {
    int n = p.size() - 1;
    vector<vector<int>> m(n, vector<int>(n, INT_MAX));
    vector<vector<int>> s(n, vector<int>(n, 0));

    for (int chain_length = 2; chain_length <= n; ++chain_length) {
        for (int i = 1; i <= n - chain_length + 1; ++i) {
            int j = i + chain_length - 1;
            m[i - 1][j - 1] = INT_MAX;
            for (int k = i; k < j; ++k) {
                int q = m[i - 1][k - 1] + m[k][j - 1] + p[i - 1] * p[k] * p[j];
                if (q < m[i - 1][j - 1]) {
                    m[i - 1][j - 1] = q;
                    s[i - 1][j - 1] = k;
                }
            }
        }
    }

    cout << "Minimum number of multiplications is " << m[0][n - 1] << "." << endl;
    cout << "The optimal sequence of parentheses is: ";
    print_optimal_parens(s, 1, n - 1);
}

// Function to print the optimal sequence of parentheses
void print_optimal_parens(const vector<vector<int>>& s, int i, int j) {
    if (i == j) {
        cout << "A" << i;
    } else {
        cout << "(";
        print_optimal_parens(s, i, s[i - 1][j - 1]);
        print_optimal_parens(s, s[i - 1][j - 1] + 1, j);
        cout << ")";
    }
}

int main() {
    // Example matrix dimensions
    vector<int> p = {30, 35, 15, 5, 10, 20, 25};

    matrix_chain_order(p);

    return 0;
}