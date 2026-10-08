#include <stdio.h>

void print_employee_details(char *employee_id, int total_hours,
                            float hourly_pay) {
  float monthly_salary = total_hours * hourly_pay;
  printf("Employees ID = %s\nSalary = $%.2f USD\n", employee_id,
         monthly_salary);
}

int main(void) { print_employee_details("0342", 8, 15000); }
