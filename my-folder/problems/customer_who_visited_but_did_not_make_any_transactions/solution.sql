# Write a SQL query to find the IDs of the users who visited without making any transactions and the number of times they made these types of visits.

# Return the result table sorted in any order.


SELECT v.customer_id, COUNT(v.visit_id) AS count_no_trans
FROM Visits v
LEFT JOIN Transactions t 
ON v.visit_id = t.visit_id
WHERE t.visit_id IS NULL
GROUP BY v.customer_id;

# # Write your MySQL query statement below


# select customer_id, count(Visits.visit_id) as count_no_trans 
# from Visits 
# where visit_id not in (select visit_id from Transactions)
# group by customer_id