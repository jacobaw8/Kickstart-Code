#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <sstream>

using namespace std;

void run_test(int test)
{
    int M, N, P;
    cin >> M >> N >> P;

    int scores[M][N];

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> scores[i][j];
        }
    }

    int total = 0;
    int high = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (scores[j][i] > high)
            {
                high = scores[j][i];
            }
        }
        //cout << "MINE: " << scores[P-1][i] << " AND THEIRS: " << high << endl;
        if(scores[P-1][i] < high){
            total += high - scores[P-1][i];
        }
        high = 0;
    }

    cout << "Case #" << test << ": " << total << endl;
}

int main()
{

    int tests;
    cin >> tests;
    for (int i = 0; i < tests; i++)
    {
        run_test(i+1);
    }
}