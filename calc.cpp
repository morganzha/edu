#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

static int num = 50;
static int range = 100;

int main() 
{  
	int i = 1;

	srand((unsigned)time(NULL));  

	while(1) {
		int dataA = rand()%100;
		int dataB;

		if (dataA % 2) {
			//add
			dataA = rand()%80 + 2;
			dataB = rand()%80 + 3;
			if (dataA + dataB < 100) {
				cout << i << ") " << dataA << "\t+\t" << dataB << "\t=	";
				i++;	

				if (i > num)
					break;
				else if (i % 2  && i)
					cout << "\n";
				else if (i % 2 == 0 && i)
					cout << "\t\t";
			}
		} else {
			//sub
			dataA = rand()%90 + 10;
			dataB = rand()%70 + 6;
			if (dataA > dataB) {
				cout << i << ") " << dataA << "\t-\t" << dataB << "\t=	";
				i++;

				if (i > num)
					break;
				else if (i % 2  && i)
					cout << "\n";
				else if (i % 2 == 0 && i)
					cout << "\t\t";
			}

		}
	}
	return 0; 
}
