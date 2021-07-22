# Write your MySQL query statement below
SELECT W2.Id
FROM Weather W1, Weather W2
WHERE W1.Temperature < W2.Temperature
AND TO_DAYS(W1.RecordDate) = TO_DAYS(W2.RecordDate) - 1
