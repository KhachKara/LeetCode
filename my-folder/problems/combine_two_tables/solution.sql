# Write an SQL query to report the first name, last name, city, and state of each 
# person in the Person table. If the address of a personId is not present in the 
# Address table, report null instead.

# Return the result table in any order.
select firstName, lastName, city, state from Person as p
left join Address as a
on p.personId = a.personId