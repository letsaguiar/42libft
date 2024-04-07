#include "unity.h"
#include "libft.h"

void	setUp(void) {}
void	tearDown(void) {}

void	test_ascii_control_codes(void)
{
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(0));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(1));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(2));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(3));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(4));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(5));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(6));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(7));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(8));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(14));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(15));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(16));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(17));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(18));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(19));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(20));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(21));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(22));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(23));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(24));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(25));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(26));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(27));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(28));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(29));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(30));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(31));
}

void	test_whitespaces(void)
{
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(9));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(10));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(11));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(12));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(13));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(32));
}

void	test_special_characters(void)
{
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(33));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(34));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(35));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(36));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(37));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(38));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(39));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(40));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(41));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(42));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(43));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(44));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(45));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(46));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(47));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(58));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(59));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(60));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(61));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(62));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(63));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(64));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(91));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(92));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(93));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(94));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(95));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(96));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(123));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(124));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(125));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(126));
}

void	test_numbers(void)
{
	TEST_ASSERT_EQUAL_INT(1, ft_isdigit(48));
	TEST_ASSERT_EQUAL_INT(1, ft_isdigit(49));
	TEST_ASSERT_EQUAL_INT(1, ft_isdigit(50));
	TEST_ASSERT_EQUAL_INT(1, ft_isdigit(51));
	TEST_ASSERT_EQUAL_INT(1, ft_isdigit(52));
	TEST_ASSERT_EQUAL_INT(1, ft_isdigit(53));
	TEST_ASSERT_EQUAL_INT(1, ft_isdigit(54));
	TEST_ASSERT_EQUAL_INT(1, ft_isdigit(55));
	TEST_ASSERT_EQUAL_INT(1, ft_isdigit(56));
	TEST_ASSERT_EQUAL_INT(1, ft_isdigit(57));
}

void	test_uppercase(void)
{
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(65));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(66));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(67));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(68));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(69));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(70));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(71));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(72));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(73));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(74));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(75));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(76));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(77));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(78));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(79));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(80));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(81));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(82));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(83));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(84));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(85));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(86));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(87));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(88));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(89));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(90));
}

void	test_lowercase(void)
{
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(97));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(98));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(99));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(100));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(101));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(102));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(103));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(104));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(105));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(106));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(107));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(108));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(109));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(110));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(111));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(112));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(113));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(114));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(115));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(116));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(117));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(118));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(119));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(120));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(121));
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(122));
}

void	test_backspace(void)
{
	TEST_ASSERT_EQUAL_INT(0, ft_isdigit(127));
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
