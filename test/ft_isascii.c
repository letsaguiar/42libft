#include "unity.h"
#include "libft.h"

void	setUp(void) {}
void	tearDown(void) {}

void	test_ascii_control_codes(void)
{
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(0));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(1));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(2));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(3));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(4));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(5));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(6));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(7));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(8));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(14));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(15));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(16));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(17));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(18));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(19));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(20));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(21));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(22));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(23));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(24));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(25));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(26));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(27));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(28));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(29));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(30));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(31));
}

void	test_whitespaces(void)
{
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(9));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(10));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(11));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(12));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(13));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(32));
}

void	test_special_characters(void)
{
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(33));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(34));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(35));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(36));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(37));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(38));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(39));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(40));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(41));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(42));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(43));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(44));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(45));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(46));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(47));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(58));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(59));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(60));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(61));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(62));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(63));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(64));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(91));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(92));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(93));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(94));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(95));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(96));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(123));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(124));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(125));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(126));
}

void	test_numbers(void)
{
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(48));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(49));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(50));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(51));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(52));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(53));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(54));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(55));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(56));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(57));
}

void	test_uppercase(void)
{
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(65));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(66));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(67));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(68));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(69));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(70));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(71));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(72));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(73));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(74));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(75));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(76));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(77));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(78));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(79));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(80));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(81));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(82));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(83));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(84));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(85));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(86));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(87));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(88));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(89));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(90));
}

void	test_lowercase(void)
{
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(97));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(98));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(99));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(100));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(101));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(102));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(103));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(104));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(105));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(106));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(107));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(108));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(109));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(110));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(111));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(112));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(113));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(114));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(115));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(116));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(117));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(118));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(119));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(120));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(121));
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(122));
}

void	test_backspace(void)
{
	TEST_ASSERT_EQUAL_INT(1, ft_isascii(127));
}

void	test_non_ascii(void)
{
	TEST_ASSERT_EQUAL_INT(0, ft_isascii(-1));
	TEST_ASSERT_EQUAL_INT(0, ft_isascii(128));
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
	RUN_TEST(test_non_ascii);
	return (UNITY_END());
}
