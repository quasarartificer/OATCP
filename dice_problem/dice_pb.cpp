#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MAXN 1000001
#define MOD 1000000007

int DP[MAXN], n;

int compute(int left)
{
    if (DP[left] != 0)
    {
        return DP[left];
    }
    for (int i = 1; i <= 6; i++)
    {
        if (left - i >= 0)
        {
            DP[left] += compute(left - i);
            DP[left] %= MOD;
        }
    }
    return DP[left];
}

int main()
{
    ifstream fin("dice_problem_test_files.txt", ios::in);
    ofstream outfile("output.txt");

    // Check if file opening succeeded
    if (!fin.is_open() || !outfile.is_open())
    {
        cerr << "Error opening file!" << endl;
        return 1;
    }
while(!fin.eof()){
    fin >> n;
    memset(DP, 0, sizeof(DP));
    DP[0] = 1;

    ll result = compute(n);

    // Write the result to the output file
    outfile << result << "\n";
}
    

    // Close the files
    fin.close();
    outfile.close();
}
