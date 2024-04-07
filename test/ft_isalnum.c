#include "unity.h"
#include "libft.h"

void	setUp(void) {}
void	tearDown(void) {}

void	test_ascii_control_codes(void)
{
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(0));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(1));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(2));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(3));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(4));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(5));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(6));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(7));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(8));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(14));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(15));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(16));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(17));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(18));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(19));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(20));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(21));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(22));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(23));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(24));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(25));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(26));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(27));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(28));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(29));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(30));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(31));
}

void	test_whitespaces(void)
{
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(9));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(10));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(11));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(12));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(13));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(32));
}

void	test_special_characters(void)
{
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(33));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(34));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(35));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(36));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(37));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(38));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(39));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(40));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(41));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(42));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(43));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(44));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(45));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(46));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(47));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(58));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(59));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(60));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(61));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(62));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(63));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(64));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(91));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(92));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(93));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(94));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(95));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(96));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(123));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(124));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(125));
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(126));
}

void	test_numbers(void)
{
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(48));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(49));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(50));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(51));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(52));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(53));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(54));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(55));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(56));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(57));
}

void	test_uppercase(void)
{
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(65));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(66));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(67));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(68));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(69));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(70));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(71));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(72));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(73));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(74));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(75));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(76));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(77));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(78));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(79));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(80));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(81));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(82));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(83));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(84));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(85));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(86));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(87));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(88));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(89));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(90));
}

void	test_lowercase(void)
{
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(97));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(98));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(99));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(100));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(101));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(102));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(103));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(104));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(105));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(106));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(107));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(108));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(109));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(110));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(111));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(112));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(113));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(114));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(115));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(116));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(117));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(118));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(119));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(120));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(121));
	TEST_ASSERT_EQUAL_INT(1, ft_isalnum(122));
}

void	test_backspace(void)
{
	TEST_ASSERT_EQUAL_INT(0, ft_isalnum(127));
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
