#include "stats.h"
#include <numeric>

Statistics::Stats Statistics::ComputeStatistics(const std::vector<double>& v) {
    return v.empty() 
    ? Statistics::Stats(NAN, NAN, NAN) 
    : Statistics::Stats(std::accumulate(v.begin(), v.end(), 0.0) / v.size(),
                             *std::max_element(v.begin(), v.end()),
                             *std::min_element(v.begin(), v.end()));
    
}
