WITH RECURSIVE Support_Chain AS (
    SELECT id, name, version FROM Project_History WHERE version = 'v0.0.3'
    UNION ALL
    SELECT p.id, p.name, p.version FROM Project_History p
    JOIN Support_Chain sc ON p.supporter_id = sc.id
) SELECT DISTINCT name FROM Support_Chain 
WHERE name IS NOT NULL;