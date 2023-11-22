# Write your MySQL query statement below
SELECT customer_id,count(customer_id) as count_no_trans
FROM Visits V
LEFT JOIN Transactions T ON V.visit_id = T.visit_id where T.visit_id is null group by customer_id;