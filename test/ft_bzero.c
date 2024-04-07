#include "unity.h"
#include "libft.h"

void	setUp(void) {}
void	tearDown(void) {}

void	test_zero(void)
{
	char s[] = "abcd";
	ft_bzero(s, 0);
	TEST_ASSERT_EQUAL_CHAR_ARRAY("abcd", s, 4);
}

void	test_one(void)
{
	char s[] = "abcd";
	ft_bzero(s, 1);
	TEST_ASSERT_EQUAL_CHAR_ARRAY("\0bcd", s, 4);
}

void	test_two(void)
{
	char s[] = "abcd";
	ft_bzero(s, 2);
	TEST_ASSERT_EQUAL_CHAR_ARRAY("\0\0cd", s, 4);
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_zero);
	RUN_TEST(test_one);
	RUN_TEST(test_two);
	return (UNITY_END());
}
