# Write your MySQL query statement below
# Write an SQL query to find the employees who earn more than their managers.
# Return the result table in any order.
SELECT e.name AS Employee 
FROM Employee e
JOIN Employee m 
ON e.managerId = m.id
WHERE e.salary > m.salary;
