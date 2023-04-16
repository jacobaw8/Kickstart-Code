#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

double distance_to_center(double x, double y)
{
    return sqrt((pow((x - 0), 2)) + pow((y - 0), 2));
}

void run_test(int test)
{

    int redCount = 0;
    int yellowCount = 0;

    int Rs, Rh;
    int N;
    int M;
    vector<double> R_locations;
    vector<double> Y_locations;

    cin >> Rs >> Rh;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int tempX, tempY;
        cin >> tempX >> tempY;
        if (distance_to_center(double(tempX), double(tempY)) - Rs <= Rh)
        {
            redCount++;
            R_locations.push_back(distance_to_center(double(tempX), double(tempY)) - Rs);
        }
    }

    cin >> M;

    for (int i = 0; i < M; i++)
    {
        int tempX, tempY;
        cin >> tempX >> tempY;
        if (distance_to_center(double(tempX), double(tempY)) - Rs <= Rh)
        {
            yellowCount++;
            Y_locations.push_back(distance_to_center(double(tempX), double(tempY)) - Rs);
        }
    }

    if (redCount && yellowCount)
    {
        redCount = 0;
        yellowCount = 0;

        sort(Y_locations.begin(), Y_locations.end());
        sort(R_locations.begin(), R_locations.end());

        if (R_locations[0] < Y_locations[0])
        {
            while (R_locations[0] < Y_locations[0] && !R_locations.empty())
            {
                R_locations.erase(R_locations.begin());
                redCount++;
            }
        }

        else if (Y_locations[0] < R_locations[0])
        {
            while (Y_locations[0] < R_locations[0] && !Y_locations.empty())
            {
                Y_locations.erase(Y_locations.begin());
                yellowCount++;
            }
        }
        else
        {
            redCount = 0;
            yellowCount = 0;
        }

    }

    cout << "Case #" << test << ": " << redCount << " " << yellowCount << endl;
}

int main()
{

    int tests;
    cin >> tests;
    for (int i = 0; i < tests; i++)
    {
        run_test(i + 1);
    }
}