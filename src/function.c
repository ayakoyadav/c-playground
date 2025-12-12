#include <stdio.h>
#include <stdbool.h>

#define MAX_EMPLOYEE_SIZE 100

//return_type name_of_func(list_of_args) {
//
//}
//

bool initialize_employee_structure(int numEmployees) {
    int employees[MAX_EMPLOYEE_SIZE] = {0};
    if (numEmployees > MAX_EMPLOYEE_SIZE) {
        return false;
    }
    for(int i = 0; i < numEmployees; i++) {
        employees[i] = i + 100;
    }
    return true;
}

int main() {
    int numEmployee;
    printf("How many employees to initialize? Limit is 100\n");
    scanf("%d", &numEmployee);
    bool isSuccess = initialize_employee_structure(numEmployee);
    printf("initialized %d employees: %s\n", numEmployee, isSuccess ? "true" : "false");
    return 0;
}
