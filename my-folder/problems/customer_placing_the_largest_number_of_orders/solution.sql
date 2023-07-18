# Find the customer_number for the customer who has placed the largest number of orders.

# The test cases are generated so that exactly one customer will have placed more orders than any other customer.

# select max(select count(customer_number) from Orders
# group by customer_number
# ) from Orders

# SELECT customer_number
# FROM Orders
# GROUP BY customer_number
# ORDER BY COUNT(order_number) DESC
# LIMIT 1;

SELECT customer_number 
FROM Orders GROUP BY customer_number 
ORDER BY COUNT(*) DESC LIMIT 1