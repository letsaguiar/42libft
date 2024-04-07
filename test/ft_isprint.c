#include "unity.h"
#include "libft.h"

void	setUp(void) {}
void	tearDown(void) {}

void	test_ascii_control_codes(void)
{
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(0));
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(1));
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(2));
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(3));
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(4));
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(5));
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(6));
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(7));
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(8));
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(14));
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(15));
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(16));
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(17));
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(18));
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(19));
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(20));
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(21));
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(22));
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(23));
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(24));
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(25));
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(26));
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(27));
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(28));
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(29));
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(30));
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(31));
}

void	test_whitespaces(void)
{
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(9));
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(10));
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(11));
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(12));
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(13));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(32));
}

void	test_special_characters(void)
{
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(33));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(34));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(35));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(36));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(37));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(38));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(39));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(40));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(41));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(42));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(43));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(44));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(45));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(46));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(47));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(58));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(59));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(60));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(61));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(62));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(63));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(64));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(91));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(92));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(93));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(94));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(95));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(96));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(123));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(124));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(125));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(126));
}

void	test_numbers(void)
{
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(48));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(49));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(50));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(51));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(52));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(53));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(54));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(55));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(56));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(57));
}

void	test_uppercase(void)
{
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(65));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(66));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(67));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(68));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(69));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(70));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(71));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(72));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(73));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(74));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(75));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(76));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(77));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(78));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(79));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(80));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(81));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(82));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(83));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(84));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(85));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(86));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(87));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(88));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(89));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(90));
}

void	test_lowercase(void)
{
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(97));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(98));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(99));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(100));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(101));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(102));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(103));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(104));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(105));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(106));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(107));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(108));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(109));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(110));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(111));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(112));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(113));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(114));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(115));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(116));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(117));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(118));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(119));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(120));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(121));
	TEST_ASSERT_EQUAL_INT(1, ft_isprint(122));
}

void	test_backspace(void)
{
	TEST_ASSERT_EQUAL_INT(0, ft_isprint(127));
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
