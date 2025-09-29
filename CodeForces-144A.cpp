//https://codeforces.com/problemset/problem/144/A
#include <iostream>
using namespace std;

int main()
{
    int number; // the number of soldiers
    cin >> number;

    int height[number]; // heights of the soldiers

    // initializing the height array
    for (int i = 0; i < number; i++)
    {
        cin >> height[i];
    }

    int Highest = height[0];
    int posH = 0; // position of tallest 
    int Lowest = height[0];
    int posL = 0; // position of shortest 

    // algorithm for finding the position of the highest and lowest element
    for (int i = 0; i < number; i++)
    {
        // for tallest soldier: take the first 
        if (height[i] > Highest)
        {
            Highest = height[i];
            posH = i;
        }
        // for shortest soldier: take the last
        if (height[i] <= Lowest)
        {
            Lowest = height[i];
            posL = i;
        }
    }

    int swaps = posH + (number - 1 - posL);

    // if tallest is after shortest, one swap overlaps
    if (posH > posL)
        swaps--;

    cout << swaps << endl;

    return 0;
}
