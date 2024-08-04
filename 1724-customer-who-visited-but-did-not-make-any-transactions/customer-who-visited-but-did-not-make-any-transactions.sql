select v1.customer_id, COUNT(customer_id) as count_no_trans from Visits as v1 left join Transactions as t1 on v1.visit_id = t1.visit_id where t1.visit_id IS NULL
GROUP BY v1.customer_id;