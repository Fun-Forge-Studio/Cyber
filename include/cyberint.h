/**
 * @copyright Copyright (c) 2024, Fun Forge Studio
 * @brief Cyberint is a mathematical library for C & C++
 * @author DevByEagle 
 * @version 1.0.0
 */

typedef unsigned int number;

double pi()
{
	return 3.14159265;
}

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
