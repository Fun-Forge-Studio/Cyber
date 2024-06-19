/**
 * @copyright Copyright (c) 2024, Fun Forge Studio
 * @brief Cyberint is a mathematical library for C & C++
 * @author DevByEagle 
 * @version 1.0.0
 */

#include <stdlib.h>

typedef int number;

/** @brief Gives The Hightist Number */
long int Huge()
{
    return 1e10 * 120;
}

/** @brief Returns The Absolute Value*/
int Abs(number num)
{
    return num;
}

/** @brief Rounds The Number */
int Round(double x)
{
	if (x < 0.0)
	{
		return (int)(x - 0.5);
	} else {
		return (int)(x + 0.5);
	}
}

char* generate_uuid()
{
	char v[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    //3fb17ebc-bc38-4939-bc8b-74f2443281d4
    //8 dash 4 dash 4 dash 4 dash 12
	static char buf[37] = {0};

	// generate random for all spaces
	for(int i = 0; i < 36; i++) {
		buf[i] = v[rand()%16];		
	}

	// put dashes in place
    buf[8] = '-';
    buf[13] = '-';
    buf[18] = '-';
    buf[23] = '-';

	// needs end byte
	buf[36] = '\0';

	return buf;
}