/* Write your T-SQL query statement below */
SELECT
    user_id,
    ROUND(AVG(CASE WHEN activity_type='free_trial' THEN CAST(activity_duration AS FLOAT) END),2) AS trial_avg_duration,
    ROUND(AVG(CASE WHEN activity_type='paid' THEN CAST(activity_duration AS FLOAT) END),2) AS paid_avg_duration
FROM 
    useractivity
GROUP BY 
    user_id 
HAVING
    AVG(CASE WHEN activity_type='paid' THEN activity_duration END) IS NOT NULL 
    AND
    AVG(CASE WHEN activity_type='free_trial' THEN activity_duration END) IS NOT NULL