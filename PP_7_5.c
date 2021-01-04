#include <stdio.h>
#include <ctype.h>


int main()
{
	int sum = 0;
	char ch ;
	printf("Enter a word:");

  //while(ch = getchar() != '\n')  //跟下一句比较，看看哪里出错了！
	while ((ch = getchar()) != '\n')
	
        switch (toupper(ch)) {
        case 'D': case 'G':
            sum += 2; break;
        case 'B': case 'C': case 'M': case 'P':
            sum += 3; break;
        case 'F': case 'H': case 'V': case 'W': case 'Y':
            sum += 4; break;
        case 'K':
            sum += 5; break;
        case 'J': case 'X':
            sum += 8; break;
        case 'Q': case 'Z':
            sum += 10; break;
        default:
            sum++; break;
        }
	
	printf("Scrabble value:\t%d", sum);
	return 0;
}