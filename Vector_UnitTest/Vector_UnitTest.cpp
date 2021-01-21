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

TEST_F(Vector_UnitTest, testAdd) {
    Vector vector(5);

    vector.add(1);
    vector.add(2);

    ASSERT_EQ(2, vector.count);
}

TEST_F(Vector_UnitTest, testCheckSize) {
    Vector vector(2);

    vector.add(1);
    vector.add(2);
    vector.add(3);

    ASSERT_EQ(3, vector.count);
    ASSERT_EQ(4, vector.capacity);
}

TEST_F(Vector_UnitTest, testRemove) {
    Vector vector(4);

    vector.add(1);
    vector.add(2);
    vector.add(3);
    vector.add(3);

    ASSERT_EQ(4, vector.capacity);

    vector.remove();
    vector.remove();

    ASSERT_EQ(2, vector.capacity);
}

TEST_F(Vector_UnitTest, testRemoveInvalid) {
    Vector vector(2);

    vector.add(1);
    vector.add(2);

    vector.remove();
    vector.remove();

    EXPECT_THROW(vector.remove(),std::logic_error);
}