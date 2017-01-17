#include "stats.h"
using namespace std;

double smallest(const vector<double>& v){
auto min = v.begin();

for (auto it = v.begin(); it != v.end(); ++it) {
    if (*it < *min)
        min = it;
}

return *min;
}

double greatest(const vector<double>& v){
auto max = v.begin();

for (auto it = v.begin(); it != v.end(); ++it) {
    if (*it > *max)
        max = it;
}

return *max;
}

double mean(const vector<double>& v){
return total(v)/v.size();
}

double total(const vector<double>& v){
double sum = 0;

for (auto it = v.begin(); it != v.end(); ++it) {
     sum += *it;
}

return sum;
}
