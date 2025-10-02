# Write your MySQL query statement below
select r.contest_id, round( count(r.contest_id)/(select count(user_id) from Users)*100,2) as percentage from Register r join
Users u on r.user_id=u.user_id 
group by r.contest_id order by percentage desc,contest_id asc;