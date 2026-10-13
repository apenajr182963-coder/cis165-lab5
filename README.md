# cis165-lab5
Compound Interest program plan:
Inputs: principal balance, annual interest rate as a percentage, and number of compounding periods per year.
Convert the annual percentage into a decimal by diving by 100.
Variables: principal, annual_rate, times_compounded, rate, amount, and interest_earned.
Calculate the final balance using pow(1.0 + rate / times_compounded, times_compounded).
Calculate interest earned by subtracting the principal from the final amount.
Tests: the assigned test (1000, 4.25%, 12) and a second test with different positive inputs.
The result with the first values was $43.34 for the interest earned and $1043.34 amount in savings and the result with the second values was $127.36 for the interest earned and $2627.36 for the amount in savings.


Loan payment program plan:
Inputs: loan amount, annual interest rate as a percentage, and number of monthly payments.
Convert the annual percentage to a decimal monthly rate by dividing by 100 and then by 12.
Variables: loan_amount, annual_rate, number_of_payments, monthly_rate, monthly_payment, amount_paid_back, and interest_paid.
Use pow() to calculate the monthly payment with the required loan formula.
Calculate the total amount paid back and the total interest.
Tests: the assigned test (10000, 12%, 36) and a second test with different positive inputs.


