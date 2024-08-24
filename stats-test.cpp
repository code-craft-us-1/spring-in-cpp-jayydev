#include "stats.h"
#include "gtest/gtest.h"

using namespace Statistics;
TEST(Statistics, ReportsAverageMinMax) {
    auto computedStats = ComputeStatistics({1.5, 8.9, 3.2, 4.5});
    double epsilon = 0.001;
    EXPECT_LT(std::abs(computedStats.average - 4.525), epsilon);
    EXPECT_LT(std::abs(computedStats.max - 8.9), epsilon);
    EXPECT_LT(std::abs(computedStats.min - 1.5), epsilon);
}

TEST(Statistics, AverageNaNForEmpty) {
    auto computedStats = ComputeStatistics({});
    EXPECT_TRUE(isnan(computedStats.average));
    EXPECT_TRUE(isnan(computedStats.max));
    EXPECT_TRUE(isnan(computedStats.min));
}
