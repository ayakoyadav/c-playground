#include <stdio.h>
#include <stdbool.h>

# define MAX_EMPLOYEES 5

struct employee_t {
    int id;
    char first_name[64];
    char last_name[64];
    float income;
    bool is_manager;
    int team_id;
};

int main() {
    struct employee_t employees[MAX_EMPLOYEES] = {0};
    
    for (int i = 0; i < MAX_EMPLOYEES; i++) {
        
        printf("Employee %s %s in team %d has income of %f\n Is a manager: %s\n\n",
                employees[i].first_name,
                employees[i].last_name,
                employees[i].team_id,
                employees[i].income,
                employees[i].is_manager ? "yes" : "no");
    }

    return 0;
}
