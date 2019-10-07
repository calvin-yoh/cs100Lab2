#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, MyDog) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "my"; test_val[2] = "dog";
    EXPECT_EQ("my dog", echo(3,test_val));
}

TEST(EchoTest, MyTest) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "I"; test_val[2] = "failed";
    EXPECT_EQ("My Test", echo(3,test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

