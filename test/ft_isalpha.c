#include "unity.h"
#include "libft.h"

void	setUp(void) {}
void	tearDown(void) {}

void	test_ascii_control_codes(void)
{
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(0));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(1));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(2));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(3));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(4));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(5));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(6));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(7));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(8));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(14));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(15));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(16));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(17));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(18));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(19));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(20));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(21));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(22));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(23));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(24));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(25));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(26));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(27));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(28));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(29));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(30));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(31));
}

void	test_whitespaces(void)
{
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(9));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(10));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(11));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(12));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(13));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(32));
}

void	test_special_characters(void)
{
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(33));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(34));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(35));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(36));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(37));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(38));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(39));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(40));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(41));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(42));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(43));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(44));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(45));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(46));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(47));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(58));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(59));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(60));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(61));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(62));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(63));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(64));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(91));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(92));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(93));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(94));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(95));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(96));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(123));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(124));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(125));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(126));
}

void	test_numbers(void)
{
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(48));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(49));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(50));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(51));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(52));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(53));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(54));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(55));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(56));
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(57));
}

void	test_uppercase(void)
{
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(65));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(66));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(67));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(68));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(69));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(70));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(71));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(72));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(73));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(74));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(75));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(76));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(77));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(78));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(79));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(80));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(81));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(82));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(83));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(84));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(85));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(86));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(87));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(88));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(89));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(90));
}

void	test_lowercase(void)
{
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(97));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(98));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(99));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(100));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(101));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(102));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(103));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(104));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(105));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(106));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(107));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(108));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(109));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(110));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(111));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(112));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(113));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(114));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(115));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(116));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(117));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(118));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(119));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(120));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(121));
	TEST_ASSERT_EQUAL_INT(1, ft_isalpha(122));
}

void	test_backspace(void)
{
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha(127));
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ascii_control_codes);
	RUN_TEST(test_whitespaces);
	RUN_TEST(test_special_characters);
	RUN_TEST(test_numbers);
	RUN_TEST(test_uppercase);
	RUN_TEST(test_lowercase);
	RUN_TEST(test_backspace);
	return (UNITY_END());
}
