#include "unity.h"
#include "libft.h"

void	setUp(void) {}
void	tearDown(void) {}

void	test_ft_strlen(void)
{
	TEST_ASSERT_EQUAL_INT(0, ft_strlen(""));
	TEST_ASSERT_EQUAL_INT(1, ft_strlen("H"));
	TEST_ASSERT_EQUAL_INT(2, ft_strlen("Hi"));
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_strlen);
	return (UNITY_END());
}
