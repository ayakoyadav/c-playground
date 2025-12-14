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

// ensure that the complier doesn't madd any space in between the elements,
// so the size will be 5 bytes across multiple systems
struct __attribute__((__packed__)) my_struct_t {
    int i;
    char c;
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
    // %zu: z is the type of sizeof return, u is the format for unsigned decimal
    printf("Size of my_struct_t: %zu bytes\n", sizeof(struct my_struct_t));

    return 0;
}
