#include "gtest/gtest.h"
#include "Vector.h"

using namespace std;

class Vector_UnitTest
        : public ::testing::Test {

protected:
    void SetUp() override {
    }

    void TearDown() override {};
};

TEST_F(Vector_UnitTest, testDefaultConstructor) {
    Vector vector;
    ASSERT_EQ(vector.capacity, 10);
}

TEST_F(Vector_UnitTest, testConstructor) {
    Vector vector(5);
    ASSERT_EQ(vector.capacity, 5);
}