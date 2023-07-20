# Find all the classes that have at least five students.
# Return the result table in any order.

select class from Courses
group by class
having count(class) >= 5

# SELECT class
# FROM Courses
# GROUP BY class
# HAVING COUNT(student) >= 5;
