#include <iostream>
#include <cmath>
using namespace std;

int find_max_distance(int X, int Y, int Z)
{
    int H = 0; 
    if ((H < Y && Y < Z) || (Z < Y && Y < H))
    {
        return -1;
    }

    int distance_H_to_Z = abs(Z - H);
    int distance_Z_to_X = abs(X - Z);

    int total_distance = distance_H_to_Z + distance_Z_to_X;

    return total_distance;
}

int main()
{
    int X, Y, Z;

    cout << "Enter the distance to John's workplace (X): ";
    cin >> X;

    cout << "Enter the distance to the construction site (Y): ";
    cin >> Y;

    cout << "Enter the distance to the constructor's home (Z): ";
    cin >> Z;

    int result = find_max_distance(X, Y, Z);
    cout << result << endl; // Output the result
                            //
    return 0;
}
