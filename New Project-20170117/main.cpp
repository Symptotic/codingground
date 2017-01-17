#include <iostream>
#include <vector>
#include "stats.h"
using namespace std;
int main()
{
   vector<double> vec;
   double input;
   while (cin >> input)
    vec.push_back(input);
   /*
   for (auto& i : vec) 
    cout  << i<< ' ';
   */
   
    cout  << smallest(vec)<< ' ' << greatest(vec)<< ' ' << mean(vec)<< ' ' << total(vec);
   return 0;
}

/*
int smallest(…)
int greatest(…)
int mean(…)
int total(…)
*/

