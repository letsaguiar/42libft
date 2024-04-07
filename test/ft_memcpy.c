#include "unity.h"
#include "libft.h"

void	setUp(void) {}
void	tearDown(void) {}

void	test_zero(void)
{
	char src[] = "abcd";
	char dest[] = "\0\0\0\0";
	ft_memcpy(dest, src, 0);
	TEST_ASSERT_EQUAL_CHAR_ARRAY("\0\0\0\0", dest, 4);
}

void	test_one(void)
{
	char src[] = "abcd";
	char dest[] = "\0\0\0\0";
	ft_memcpy(dest, src, 1);
	TEST_ASSERT_EQUAL_CHAR_ARRAY("a\0\0\0", dest, 4);
}

void	test_two(void)
{
	char src[] = "abcd";
	char dest[] = "\0\0\0\0";
	ft_memcpy(dest, src, 2);
	TEST_ASSERT_EQUAL_CHAR_ARRAY("ab\0\0", dest, 4);
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_zero);
	RUN_TEST(test_one);
	RUN_TEST(test_two);
	return (UNITY_END());
}
