#include "stats.h"
#include <numeric>
#include <algorithm>

using namespace Statistics;
Stats Statistics::ComputeStatistics(const std::vector<double>& v) 
{
    return v.empty() 
    ? Stats(NAN, NAN, NAN) 
    : Stats(std::accumulate(v.begin(), v.end(), 0.0) / v.size(),
                             *std::max_element(v.begin(), v.end()),
                             *std::min_element(v.begin(), v.end()));
    
}
