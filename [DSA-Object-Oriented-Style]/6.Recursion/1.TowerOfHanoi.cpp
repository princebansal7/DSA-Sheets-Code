/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

// Tower of Honoi puzzle
// Three Towers:
//              A (source)
//              B (auxillary / helper)
//              C (destination)

// NOTE : TOH(dics, source_tower, helper_tower, destination_tower)

// Rules:
//       1. Move all the dics from tower A to C.
//       2. Bigger dics can't be on the smaller ones.
//       3. You can move only one disk at a time only.
//       4. you can't place dics anywhere other then the towers themselves.

// Solution - Using Recursion:
//           1. 1st move n-1 dics from tower A to tower B => towerC becomes helper
//           2. then move nth disk from tower A to tower C
//           3. at last move those n-1 dics from tower B to tower C => towerA becomes helper

class TOH {
public:
    static void TOHMoves(int dics, char towerA, char towerB, char towerC)
    {
        if (dics > 0) {
            TOHMoves(dics - 1, towerA, towerC, towerB);
            cout << towerA << " -> " << towerC << nl;
            TOHMoves(dics - 1, towerB, towerA, towerC);
        }
    }
};

int main()
{
    int dics;
    cout << "Enter dics: ";
    cin >> dics;
    cout << "Moves for moving " << dics << " dics from tower A to C" << nl;
    TOH::TOHMoves(dics, 'A', 'B', 'C');

    cout << nl << nl;
    TOH::TOHMoves(4, 'A', 'B', 'C');

    return 0;
}