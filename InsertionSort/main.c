#include <stdio.h>
#include "sort.h"
// ich mag Pedro
// auch Vlado ist traurig
void main()
{
	double daten[LEN] = { 16, 7, 9, 11, 2, 38, 22, 45, 1, 2.5, 7, 9 };
	int index[LEN];
	int i;

	// Array initialisieren
	indexInit(index, LEN);
	// Daten und initialisierten Index ausgeben
	for (i = 0; i < LEN; i++)
		printf("%4.1f\t", daten[i]);
	printf("\n");
	for (i = 0; i < LEN; i++)
		printf("%3d\t", index[i]);

	// Aufsteigend sortieren
	insertionSort(daten, index, LEN, 1);
	// Ausgabe der sortierten Indices
	printf("\n");
	for (i = 0; i < LEN; i++)
		printf("%3d\t", index[i]);

	// Absteigend sortieren
	insertionSort(daten, index, LEN, 0);
	// Ausgabe der sortierten Indices
	printf("\n");
	for (i = 0; i < LEN; i++)
		printf("%3d\t", index[i]);
		
	getchar();
}
