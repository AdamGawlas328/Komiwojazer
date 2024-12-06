#include <gtest/gtest.h>

#include "TSP.hpp"

TEST(CostMatrixTest, reduce_rows) {
cost_matrix_t cm_raw = {
        {INF, 10,  8,   19,  12},
        {10,  INF, 20,  6,   3},
        {8,   20,  INF, 4,   2},
        {19,  6,   4,   INF, 7},
        {12,  3,   2,   7,   INF}
};
CostMatrix cm(cm_raw);

EXPECT_EQ(cm.reduce_rows(), 19);
}

TEST(CostMatrixTest, reduce_cols) {
    cost_matrix_t cm_raw = {
            {INF, 10,  8,   19,  12},
            {10,  INF, 20,  6,   3},
            {8,   20,  INF, 4,   2},
            {19,  6,   4,   INF, 7},
            {12,  3,   2,   7,   INF}
    };
    CostMatrix cm(cm_raw);

    EXPECT_EQ(cm.reduce_rows(), 19);
    EXPECT_EQ(cm.reduce_cols(), 9);
}

TEST(CostMatrixTest, get_vertex_cost) {
    cost_matrix_t cm_raw = {
            {INF, 10,  8,   19,  12},
            {10,  INF, 20,  6,   3},
            {8,   20,  INF, 4,   2},
            {19,  6,   4,   INF, 7},
            {12,  3,   2,   7,   INF}
    };
    CostMatrix cm(cm_raw);

    EXPECT_EQ(cm.reduce_rows(), 19);
    EXPECT_EQ(cm.reduce_cols(), 9);
    EXPECT_EQ(cm.get_vertex_cost(0, 2), 1);
    EXPECT_EQ(cm.get_vertex_cost(2, 0), 1);
    EXPECT_EQ(cm.get_vertex_cost(2, 4), 0);
    EXPECT_EQ(cm.get_vertex_cost(4, 1), 1);
    EXPECT_EQ(cm.get_vertex_cost(2, 3), 1);
}