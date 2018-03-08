#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

static int num = 25;
static int range = 100;

static int global_result[50];
int main() 
{  
	int i = 1;
	int r;
	int dataA;
	int dataB;
	int dataC;
	int op1;
	int op2;

	srand((unsigned)time(NULL));  

	while(1) {
		//srand((unsigned)time(NULL));  
		int result;

		op1 = rand()%2;
		op2 = rand()%2;

		//cout << i << "\t"  << dataA << "\t" << dataB << "\t" << dataC << "\t" << op1 << "\t" << op2 <<"\n";

		if (op1 == 1 && op2 == 1) {
			while(1) {
				dataA = rand()%100;
				dataB = rand()%100;
				dataC = rand()%100;
				result = dataA + dataB + dataC;
				if (result < 100) {
					cout << "\t";
					cout << i << ") " << dataA << "\t+\t" << dataB << "\t+\t" << dataC << "\t=	";
					global_result[i] = result;
					break;
				}
					

			}


		} else if (op1 == 0 && op2 == 0) {
			while(1) {
				dataA = rand()%100;
				dataB = rand()%100;
				dataC = rand()%100;
				result = dataA - dataB - dataC;
				if (result < 100 && result >= 0) {
					cout << "\t";
					cout << i << ") " << dataA << "\t-\t" << dataB << "\t-\t" << dataC << "\t=	";
					global_result[i] = result;
					break;
				}
					

			}

		} else if (op1 == 1 && op2 == 0) {
			while(1) {
				dataA = rand()%100;
				dataB = rand()%100;
				dataC = rand()%100;
				result = dataA + dataB - dataC;
				if (dataA + dataB < 100 && result < 100 && result >= 0) {
					cout << "\t";
					cout << i << ") " << dataA << "\t+\t" << dataB << "\t-\t" << dataC << "\t=	";
					global_result[i] = result;
					break;
				}
					

			}

		} else if (op1 == 0 && op2 == 1) {
			while(1) {
				dataA = rand()%100;
				dataB = rand()%100;
				dataC = rand()%100;
				result = dataA - dataB + dataC;
				if (dataA > dataB && result < 100 && result >= 0) {
					cout << "\t";
					cout << i << ") " << dataA << "\t-\t" << dataB << "\t+\t" << dataC << "\t=	";
					global_result[i] = result;
					break;
				}
					

			}

		} else {

			cout << "why\n";
		}

		cout << "\t\t\t\t";
		cout << i << ") " << global_result[i];
#if 0
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
#endif
		if (i >= num) {
			cout << "\n";
			break;
		} else if (i % 2) {
			//cout << "\t\t";
			cout << "\n";
		} else if (i % 2 == 0)
			cout << "\n";
		i++;
	}

#if 0
	cout << "\n\n\n";
	for (i = 1; i <= num; i++) {
		cout << i << ") " << global_result[i];
		if (i%10 == 0)
			cout << "\n";
		else
			cout << "\t";
	}
#endif
	return 0; 
}
