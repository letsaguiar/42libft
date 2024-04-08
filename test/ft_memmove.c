#include "unity.h"
#include "libft.h"

void	setUp(void) {}
void	tearDown(void) {}

void	test_no_overlaping(void)
{
	char s[10] = "XXXXX";
	ft_memmove(&s[5], &s[0], 5);
	TEST_ASSERT_EQUAL_CHAR_ARRAY("XXXXXXXXXX", s, 10);
}

void	test_overlaping_start(void)
{
	char s[10] = "XXXXXYYYYY";
	ft_memmove(&s[0], &s[4], 5);
	TEST_ASSERT_EQUAL_CHAR_ARRAY("XYYYYYYYYY", s, 10);
}

void	test_overlaping_end(void)
{
	char s[10] = "XXXXXYYYYY";
	ft_memmove(&s[4], &s[0], 5);
	TEST_ASSERT_EQUAL_CHAR_ARRAY("XXXXXXXXXY", s, 10);
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_no_overlaping);
	RUN_TEST(test_overlaping_start);
	RUN_TEST(test_overlaping_end);
	return (UNITY_END());
}
