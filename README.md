# cis165-lab5
Compound Interest program plan:
Inputs: principal balance, annual interest rate as a percentage, and number of compounding periods per year.
Convert the annual percentage into a decimal by diving by 100.
Variables: principal, annual_rate, times_compounded, rate, amount, and interest_earned.
Calculate the final balance using pow(1.0 + rate / times_compounded, times_compounded).
Calculate interest earned by subtracting the principal from the final amount.
Tests: the assigned test (1000, 4.25%, 12) and a second test with different positive inputs (2500, 5.00% and 4).
The result with the first values was $43.34 for the interest earned and $1043.34 amount in savings and the result with the second values was $127.36 for the interest earned and $2627.36 for the amount in savings.


Loan payment program plan:
Inputs: loan amount, annual interest rate as a percentage, and number of monthly payments.
Convert the annual percentage to a decimal monthly rate by dividing by 100 and then by 12.
Variables: loan_amount, annual_rate, number_of_payments, monthly_rate, monthly_payment, amount_paid_back, and interest_paid.
Use pow() to calculate the monthly payment with the required loan formula.
Calculate the total amount paid back and the total interest.
Tests: the assigned test (10000, 12%, 36) and a second test with different positive inputs (2100, 15%, 21).
The result with the first values was $332.14 for monthly payment, amount paid back was $11,957.15, interest paid $1,957.15 and the results with the second values was $114.32 for monthly payment, amount paid back was $2400.69, interest paid $300.69.

Questions to be answered for 5:
1. A percentage has to be divided by 100 before using it in a formula because dividing by 100 changes it to it's decimal form to be used in expressions, also cause 100% is the maximum percentage in anything.
2. The pow function raises a number to a specific power. Needing a base and exponent.
3. The number of compound periods determines how many times interest is applied to the balance. More compound periods can results in greater savings because interest earns additional interest over time.
4. First the annual interest rate is divided by 100 to change it into a decimal, then divided by 12 to get the monthly rate because there's 12 months in a year.
5. The double data type stores decimal numbers with greater precision than an integer and generally provides more precision than a float. It is useful for interest, loan payments, and savings calculations because these operations often produce decimal values.
6. Rounding intermediate results can introduce small errors that accumulate throughout a calculation. Keeping full precision during calculations helps produce a more accurate final result. The value should only be rounded to two decimal places when it is displayed as a monetary amount.
7. The total amount paid back is calculated by multiplying the regular payment by the total number of payments. The total interest is then calculated by subtracting the original loan amount from the total amount paid back.
8. Storing calculations in variables makes the program easier to read, understand, and maintain. Variables also allow calculated values to be reused without repeating the same formulas. This makes it easier to display results clearly and check calculations for errors.



