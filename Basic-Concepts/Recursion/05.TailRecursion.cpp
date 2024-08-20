/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

// Tail Recursion takes less time for in modern compilers
// Reason ?
// Because of execution flow, as it is tail recursive.
// Tail Recursive: A function is called tail recursive when parent function has nothing more to
//                 do when the child function is finished
//                                or
//                 A function is called tail recursive when the last thing that happens in that
//                 function is a recursive call.
//
// So, because of this Execution is faster because caller doesn't have to save the state as nothing
// is going to get implemented after recusion call.
// So, modern compiler does a little optimisation here:
//  void printNto1(int n)
//  {
//     .....
//     .....
//     cout << n << " ";
//     printNto1(n - 1);  ===> they changes this to
//  }

//  this:-

//  void printNto1(int n)
//  {
//     start:
//     .....
//     .....
//     cout << n << " ";
//     n = n-1;
//     goto start;
//  }

// So, they remove recursion completely => No Auxillary space requirement => SC: O(N) -> theta(1)
//  => if this optimisation was not done, then we would've need O(N) aux space for recursie calls,
//     need to save the states of function and then need to resume for those states, but now with
//     that Optimisation all that overhead is Gone.

// Those above Changes which Modern compilers make is called "Tail call Elimination"
// So, Always prefer Tail recusive solutions as they are more optimised

// Tail Recursive
void printNto1(int n)
{
    if (n == 0)
        return;

    cout << n << " ";
    printNto1(n - 1);
}

// Not Tail recursive
void print1toN(int n)
{
    if (n == 0)
        return;

    print1toN(n - 1);
    cout << n << " ";
}

// Now, can we change function to Tail recursive if they are not ?
// See above function print1toN() it's not tail recursive. let's make it Tail recusive:

void print1toN_TailRecursive(int n, int k = 1)
{
    // we can pass k=1 initially too instead of taking as deafult value
    if (n == 0)
        return;

    cout << k << " ";
    print1toN_TailRecursive(n - 1, k + 1);
}

// NOTE: We can't convert every Non tail recursive function to Tail Recusive function
// eg:
//    1. Merge sort (not tail recursive) & Quick sort (tail recursive).
//       That's also one of the reason why Quick Sort is Fast.
//    2. In Tree Traversals Preorder, Inorder traversal are tail recursive but Post order traversal is not.
//       that's why in interviews prefer Pre or In order traversal if can apply instead or post order traversal.
//       eg: when finding sum of all the nodes in a tree
//    3. factorial function isn't tail recursive by default but we can make it tail recusive. see in next 6.Factorial.cpp

int main()
{
    int n;
    cin >> n;

    // printNto1(n);

    // print1toN(n);

    print1toN_TailRecursive(n, 1);

    return 0;
}