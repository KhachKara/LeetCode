# Find all customers who never order anything.
# Return the result table in any order.
# The result format is in the following example.

SELECT c.name Customers
FROM Customers c
LEFT JOIN Orders o ON c.id = o.customerId
WHERE o.customerId IS NULL;
