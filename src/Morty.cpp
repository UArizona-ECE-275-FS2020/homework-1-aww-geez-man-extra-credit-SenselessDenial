/*
 __  __            _
|  \/  | ___  _ __| |_ _   _        ___ _ __  _ __
| |\/| |/ _ \| '__| __| | | |      / __| '_ \| '_ \
| |  | | (_) | |  | |_| |_| |  _  | (__| |_) | |_) |
|_|  |_|\___/|_|   \__|\__, | (_)  \___| .__/| .__/
                       |___/           |_|   |_|
*/

// Include the Morty header file
#include "Morty.hpp"
#include <string.h>
using namespace std;
using namespace interdimensional;

args interdimensional::parseArgs(int c, char** v)
{

    args pargs;

    pargs.start = atoi(v[1]);
    pargs.stop = atoi(v[2]);
    pargs.step = 1;

    if (c == 4) {
        if (strcmp(v[3], "C137") == 0) {
            pargs.dim = dimension::C137;
        }
        else if (strcmp(v[3], "Z286") == 0) {
            pargs.dim = dimension::Z286;
        }
        else {
            pargs.dim = dimension::UNKNOWN;
        }
    }
    else if (c == 5) {
        pargs.step = atoi(v[3]);

        if (strcmp(v[4], "C137") == 0) {
            pargs.dim = dimension::C137;
        }
        else if (strcmp(v[4], "Z286") == 0) {
            pargs.dim = dimension::Z286;
        }
        else {
            pargs.dim = dimension::UNKNOWN;
        }
    }

    return pargs;
}





// =========================================================================== // 
//          Define functions enclosed in Namespace C137 here 
// =========================================================================== // 

void C137::Morty(int start, int stop)
{
    int i;

    cout << "Morty C137 says:" << endl;

    for (i = start; i <= stop; i++)
    {
        cout << i << ": ";

        if (i % 15 == 0)
        {
            cout << "Aww Geez Man";
        }
        else if (i % 5 == 0)
        {
            cout << "Geez";
        }
        else if (i % 3 == 0)
        {
            cout << "Aww";
        }

        cout << endl;
    }
}

void C137::Morty(int start, int stop, int step)
{
    int i;

    cout << "Morty C137 says:" << endl;

    for (i = start; i <= stop; i+= step)
    {
        cout << i << ": ";

        if (i % 15 == 0)
        {
            cout << "Aww Geez Man";
        }
        else if (i % 5 == 0)
        {
            cout << "Geez";
        }
        else if (i % 3 == 0)
        {
            cout << "Aww";
        }

        cout << endl;
    }
}




// =========================================================================== // 
//          Define functions enclosed in Namespace Z286 here 
// =========================================================================== // 

void Z286::Morty(int start, int stop)
{
    int i;

    cout << "Morty Z286 says:" << endl;

    for (i = start; i <= stop; i++)
    {
        cout << i << ": ";

        if (i % 15 == 0)
        {
            cout << "naM zeeG wwA";
        }
        else if (i % 5 == 0)
        {
            cout << "zeeG";
        }
        else if (i % 3 == 0)
        {
            cout << "wwA";
        }

        cout << endl;
    }
}

void Z286::Morty(int start, int stop, int step)
{
    int i;

    cout << "Morty Z286 says:" << endl;

    for (i = start; i <= stop; i += step)
    {
        cout << i << ": ";

        if (i % 15 == 0)
        {
            cout << "naM zeeG wwA";
        }
        else if (i % 5 == 0)
        {
            cout << "zeeG";
        }
        else if (i % 3 == 0)
        {
            cout << "wwA";
        }

        cout << endl;
    }
}