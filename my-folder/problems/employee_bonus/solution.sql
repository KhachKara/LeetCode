# Write an SQL query to report the name and bonus amount of each employee with a bonus less than 1000.

# Return the result table in any order.

select name, bonus  from Employee e
LEFT JOIN Bonus b 
ON e.empId = b.empId
where b.bonus is null or b.bonus < 1000
