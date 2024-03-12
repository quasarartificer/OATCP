#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#define ll long long int
#define mod 1000000007

using namespace std;

ll countWays(vector<string>& grid, ll size)
{
    // Define a 2D array dp[][] where dp[i][j] represents
    // the number of ways to reach cell (i, j) from cell (0, 0)
    vector<vector<ll> > dp(size, vector<ll>(size, 0));

    // Calculate the number of ways for the first column
    for (int i = 0; i < size; i++) {
        if (grid[i][0] == '*')
            break;
        dp[i][0] = 1;
    }

    // Calculate the number of ways for the first row
    for (int j = 0; j < size; j++) {
        if (grid[0][j] == '*')
            break;
        dp[0][j] = 1;
    }

    // Calculate the number of ways for the remaining grid
    for (int i = 1; i < size; i++) {
        for (int j = 1; j < size; j++) {
            // If the cell is blocked, skip to the next cell
            if (grid[i][j] == '*')
                continue;

            // The number of ways to reach cell (i, j) is the sum of
            // the number of ways to reach cell (i-1, j) and
            // the number of ways to reach cell (i, j-1)
            dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % mod;
        }
    }
    
    // Return the number of ways to reach the last cell of the grid
    return dp[size - 1][size - 1];
}

int main()
{
    ifstream infile("grid_paths_test_file2.txt");
    ofstream outfile("output_2.txt");
  
    // Check if file opening succeeded
    if (!infile.is_open() || !outfile.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    ll size;
    infile >> size; // Read the size of the grid

    // Read the grid from the file
    vector<string> grid(size);
    for (int i = 0; i < size; ++i) {
        infile >> grid[i];
    }

    // Calculate the result
    ll result = countWays(grid, size);

    // Write the result to the output file
    outfile << result << "\n";

    // Close the files
    infile.close();
    outfile.close();

    return 0;
}
