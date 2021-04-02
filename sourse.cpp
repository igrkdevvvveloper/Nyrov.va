#include "idc_date.h"

#include <vector>
#include <iterator>

int main()
{
	//���������� ������� ��� �������� ���
	vector<Date> e;

	//������ ���� �� ������ ����� � ������
	copy(istream_iterator<Date>(cin),
		istream_iterator<Date>(),
		back_inserter(e)); // ���������� �������� ���� � ����� �������

	//����� ��������, ������� ����� ��������� ��� 01.01.21 � 31.12.21
	auto first = find(e.begin(), e.end(), "01/01/21");
	auto last = find(e.begin(), e.end(), "12/31/21");
	*last = "12/31/21";

	//���������� ����� ���, ������� � ������� 01.01.21 � �� 31.12.21
	copy(first, last,
		ostream_iterator<Date>(cout, "\n"));

	//���������� ������� ����, ������������ ������� Date, � ����� �������
	e.insert(--e.end(), Date::TodayDate());


	//���������� ����� ��� � ����� ofDates - �� �������
	//copy(first, last,
	//	ostream_iterator<Date>(ofDates, "\n"));
}
