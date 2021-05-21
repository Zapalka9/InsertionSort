#include "sort.h"

void indexInit(int index[], int len)
{
	int i;
	for (i = 0; i < len; i++)
		index[i] = i;
}

void insertionSort(double data[], int index[], int len, int sorted)
{
	int i, j, iGem;
	if (sorted)    // ASC
	{
		for (i = 1; i != len; i++)
		{
			iGem = index[i];
			for (j = i-1; j>=0 && data[index[j]] >= data[iGem]; j--)
				index[j+1] = index[j];
			index[j + 1] = iGem;
		}
	}
	else				// DEC
	{
		for (i = 1; i != len; i++)
		{
			iGem = index[i];
			for (j = i - 1; j>=0 && data[index[j]] <= data[iGem]; j--)
				index[j + 1] = index[j];
			index[j + 1] = iGem;
		}
	}
}


void insertionSort2(double data[], int index[], int len, int sorted)
{
	int i, p, j, iGem;
	double vergleichswert;
	if (sorted)    // ASC
	{
		for (i = 1; i < len; i++)
		{
			vergleichswert = data[index[i]];
			j = i;
			iGem = index[i];
			while (j > 0 && data[index[j - 1]] > vergleichswert)
			{
				index[i] = index[j - 1];
				j--;
			}
			if (i - j > 1)  // rechts Ende
			{
				for (p = i; p > j; p--)
					index[p] = index[p - 1];
			}
			index[j] = iGem;
		}
	}
	else				// DEC
	{
		for (i = 1; i < len; i++)
		{
			vergleichswert = data[index[i]];
			j = i;
			iGem = index[i];
			while (j > 0 && data[index[j - 1]] < vergleichswert)   // short circuit evaluation
			{
				index[i] = index[j - 1];
				j--;
			}
			if (i - j > 1)  // rechts Ende
			{
				for (p = i; p > j; p--)
					index[p] = index[p - 1];
			}
			index[j] = iGem;
		}
	}
}