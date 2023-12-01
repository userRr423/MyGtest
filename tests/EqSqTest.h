#ifndef EQSQTEST_H
#define EQSQTEST_H


#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "EqSq.h"
}

TEST(MyrootTest, num0) {
    float root1, root2;

     roots(4, 10, 1, &root1, &root2);

     int g = root1;
     int g2 = root2;

     ASSERT_EQ(g, 0);
     ASSERT_EQ(g2, -2);
}



TEST(MyrootTest2, num0) {
    //ASSERT_EQ(roots(4, 10, 1), -2);
    float root1, root2;

     roots(40, 10, 1, &root1, &root2);

     int g = root1;
     int g2 = root2;

     ASSERT_EQ(g, 0);
     ASSERT_EQ(g2, 0);
}

TEST(MyrootTest3, num0) {
    //ASSERT_EQ(roots(4, 10, 1), -2);
    float root1, root2;

     roots(3, 5, 1, &root1, &root2);

     int g = root1;
     int g2 = root2;

     ASSERT_EQ(g, 0);
     ASSERT_EQ(g2, -1);
}

#endif // EQSQTEST_H
