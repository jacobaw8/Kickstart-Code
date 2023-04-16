#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){

    int trials;
    cin >> trials;

    for(int i = 0; i < trials; i++){

        int numItems, numTries, answer;
        cin >> numItems >> numTries;

        int vals[numTries];
        for(int j = 0; j < numTries; j++){
            int currVal;
            cin >> currVal;
            vals[j] = currVal;
        }

        if(numTries > 0){
            answer = 0;
            int odds = 0;
            for(int j = 0; j < numTries; j++){
                odds = 1 - 
                answer += 
            }
        }else{
            //weighted average...
        }



        // 1 - (2/3)^2.... 

        // Odds that the high value is selected is 1/N
        // 1/3
        // P(average)

    }


    return 0;
}