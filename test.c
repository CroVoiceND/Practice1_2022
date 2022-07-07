#include "pch.h"
#include "D:\HOME\program\vsc\projects\Practice2022\function\chessboard.h"
 
TEST(Test, Test1) {
  EXPECT_EQ(chessboard(1, 1, 2, 2), 1);
}
 
TEST(Test, Test2) {
  EXPECT_EQ(chessboard(1, 1, 8, 8), 7);
}
 
TEST(Test, Test3) {
  EXPECT_EQ(chessboard(3, 6, 8, 7), 5);
}
 
TEST(Test, Test4) {
  EXPECT_EQ(chessboard(2, 4, 8, 1), 6);
}
 
TEST(Test, Test5) {
  EXPECT_EQ(chessboard(5, 1, 1, 8), 7);
}
