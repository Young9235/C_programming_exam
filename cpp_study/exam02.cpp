#include <iostream>

// ������ �̸��� ���������� ������ static����, �� ���� �ȿ����� ��밡��
namespace {
	// �� �Լ��� �� ���� �ȿ����� ����� �� �ֽ��ϴ�.
	// �̴� ��ġ static int OnlyInThisFile() �� �����մϴ�.
	int OnlyInThisFile() {}

	// �� ���� ���� static int x �� �����մϴ�.
	int only_in_this_file = 0;
}  // namespace

int main()
{
	OnlyInThisFile();
	only_in_this_file = 3;
	return 0;
}