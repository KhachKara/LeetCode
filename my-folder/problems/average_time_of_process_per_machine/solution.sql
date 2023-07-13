# There is a factory website that has several machines each running the same number of processes. Write an SQL query to find the average time each machine takes to complete a process.

# The time to complete a process is the 'end' timestamp minus the 'start' timestamp. The average time is calculated by the total time to complete every process on the machine divided by the number of processes that were run.

# The resulting table should have the machine_id along with the average time as processing_time, which should be rounded to 3 decimal places.

#Return the result table in any order.

# select a1.machine_id, round(avg(a2.timestamp - a1.timestamp), 3) processing_time 
# from Activity a1 
# join Activity a2
# on a1.machine_id = a2.machine_id and a1.process_id = a2.process_id
# where a1.activity_type = 'start' and a2.activity_type = 'end'
# group by a1.machine_id

# select machine_id, round(
#   (
#     sum(case when activity_type = 'end' then timestamp end) - 
#     sum(case when activity_type = 'start' then timestamp end)
#   ) / count(distinct process_id), 3) as processing_time
# from Activity
# group by machine_id

select 
a.machine_id,round(avg(b.timestamp-a.timestamp),3) as processing_time
from activity a, activity b
where
a.machine_id=b.machine_id
and
a.process_id=b.process_id
and a.activity_type = 'start'
and b.activity_type='end' 
group by a.machine_id ;