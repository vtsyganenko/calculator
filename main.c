#include "stdio.h"

#include "math_methods.h"

int main() {
    double val1 = 0.0;
    char action = ' ';
    double val2 = 0.0;
    double res = 0.0;
		
    // val1 + val2
    scanf("%lf%c%lf", &val1, &action, &val2);
	
    switch(action) {
    case '+':
        res = math_add(val1, val2);
        break;
    }

    printf("%g%c%g=%g\n", val1, action, val2, res);

    return 0;
}

