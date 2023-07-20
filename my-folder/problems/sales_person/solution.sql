# Find the names of all the salespersons who did not have any orders related to the company with the name "RED".

# Return the result table in any order.

# select DISTINCT sp.name 
# from SalesPerson sp

# left join Orders o on sp.sales_id = o.sales_id
# left join Company c on o.com_id = c.com_id

# where c.name IS NULL OR c.name != 'RED' 

SELECT s.name
FROM salesperson s
WHERE s.sales_id NOT IN (
  SELECT o.sales_id
  FROM orders o
  LEFT JOIN company c ON o.com_id = c.com_id
  WHERE c.name = 'RED')