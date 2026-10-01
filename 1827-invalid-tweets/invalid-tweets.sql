# Write your MySQL query statement below
SELECT T. TWEET_ID 
FROM TWEETS AS T
WHERE LENGTH(CONTENT) > 15;