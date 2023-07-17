# Find the number of times each student attended each exam.
# Return the result table ordered by student_id and subject_name.

# SELECT ex.student_id, st.student_name, ex.subject_name, COUNT(*) AS attended_times
# FROM Examinations ex
# left join Students st
# on ex.student_id = st.student_id
# GROUP BY ex.student_id, ex.subject_name
# ORDER BY ex.student_id, ex.subject_name;

select t.student_id, t.student_name, t.subject_name, 
    if(e.attended_exams is null, 0, e.attended_exams) as attended_exams
from
    (select *
    from Students
    cross join Subjects) t
left join 
    (select *, count(*) as attended_exams
    from Examinations
    group by student_id, subject_name) e
on t.student_id = e.student_id and t.subject_name = e.subject_name
order by student_id, subject_name