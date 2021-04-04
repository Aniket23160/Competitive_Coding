
// Sample code to perform I/O:

#include <iostream>
#include <math.h>

using namespace std;

static int divisor(int number)
    {
        int i;
        for (i = 2; i <sqrt(number); i++)
        {
            if (number % i == 0)
            {
                break;
            }
        }
        return number/i;
    }

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << divisor(num) << endl;		// Writing output to STDOUT
}

