#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#pragma warning(disable:4996)

// 배열, 배열 번호 삭제
void Delete(char * name, int index)
{
	memmove(name + index, name + index + 1, strlen(name) - index);
}

int main()
{
	char name[100];
	int len = 0, i = 0;

	printf("2글자 이상 입력하세요 : ");
	fgets(name, sizeof(name), stdin);

	strupr(name); // 대문자로 변환

	len = strlen(name);

	// 첫 번째 글자 제외하고 포함되는 문자 삭제
	while (i + 1 != len - 1)
	{
		switch (name[i + 1])
		{
		case 'A': case 'E': case 'H': case 'I': case 'O': case 'U': case 'W': case 'Y':
			Delete(name, i + 1);
			break;
		default:
			i++;
			break;
		}
	}

	i = 0;

	// 포함되는 문자 해당하는 숫자로 변환
	while (name[i + 1] != '\n')
	{
		switch (name[i + 1])
		{
		case 'B': case 'F': case 'P': case 'V':
			name[i + 1] = '1';
			break;
		case 'C': case 'G': case 'J': case 'K': case 'Q': case 'S': case 'X': case 'Z':
			name[i + 1] = '2';
			break;
		case 'D': case 'T':
			name[i + 1] = '3';
			break;
		case 'L':
			name[i + 1] = '4';
			break;
		case 'M': case 'N':
			name[i + 1] = '5';
			break;
		case 'R':
			name[i + 1] = '6';
			break;
		default:
			break;
		}
		i++;
	}

	printf("변경 전 : %s", name);

	// 총 4개의 문자 미만인 경우 0을 붙임 나머지는 제외
	for (i = 1; i < 4; i++)
	{
		if ((name[i] == '\n') || (name[i] == '\0'))
		{
			name[i] = '0';
		}
	}

	printf("변경 후 : %s\n", name);

	return 0;
}
