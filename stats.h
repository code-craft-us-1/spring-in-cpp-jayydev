#include <cmath>
#include <vector>

namespace Statistics {    
    struct Stats {
        double average;
        double max;
        double min;

        Stats() : average(NAN), max(NAN), min(NAN) {}
        Stats(double avg, double mx, double mn) : average(avg), max(mx), min(mn) {}
    };
    
    Stats ComputeStatistics(const std::vector<double>&);
}
