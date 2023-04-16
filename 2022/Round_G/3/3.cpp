#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <sstream>
#include <numeric>

using namespace std;

void run_test(int test)
{
    int total = 0;
    int size;
    cin >> size;

    vector<int> arr;

    for(int i = 0; i < size; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    //check for sub arrays starting from the beginning
    int currSum = 0;
    int head = 0;
    int tail = 0;
    for(int i = 0; i < size; i++){
        for(int j = head; j <= tail; j++){
            currSum += arr[j];
        }
        if(currSum > 0){
            cout << "CURR SUM: " << currSum << endl;
            total += accumulate( arr.begin() + head, arr.end() + tail, 0 );
            if(tail == size - 1 && head < size-1){
                head++;
                tail = head;
            }else{ tail++; }
            
        }else{
            head++;
            tail = head;
        }
        currSum = 0;
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