/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'
// Rules:
// 1. Only one disc moves at a time
// 2. No larger disc above smaller
// 3. Only the top disc of tower can be moved

// NOTE: TOH(dics,source_tower, helper_tower, destination_tower)

void TOH(int disc, char source, char aux, char destination)
{
    // if (disc == 1) {
    //     cout << "Move Disc " << disc << " from " << source << " to " << destination << nl;
    //     return;
    // }

    if (disc == 0)
        return;
    // moving n-1 dics from tower A to tower B =>
    // A => source
    // B => destination
    // C => helper / aux

    TOH(disc - 1, source, destination, aux);

    cout << "Move Disc " << disc << " from " << source << " to " << destination << nl;

    // moving n-1 discs from tower B to tower C =>
    // A => aux / helper
    // B => source
    // C => destination

    TOH(disc - 1, aux, source, destination);
}

int main()
{
    int disc;
    cin >> disc;

    // A -> Source tower
    // B -> Auxillary tower / helper tower
    // C -> Destination tower

    TOH(disc, 'A', 'B', 'C');

    return 0;
}