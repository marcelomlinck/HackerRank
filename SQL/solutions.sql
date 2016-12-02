-- Author: Marcelo Linck

-- https://www.hackerrank.com/challenges/weather-observation-station-8
SELECT DISTINCT CITY FROM STATION 
WHERE (CITY LIKE 'A%' OR CITY LIKE 'E%' OR CITY LIKE 'I%' OR CITY LIKE 'O%' OR CITY LIKE 'U%') AND 
(CITY LIKE '%A' OR CITY LIKE '%E' OR CITY LIKE '%I' OR CITY LIKE '%O' OR CITY LIKE '%U')

-- https://www.hackerrank.com/challenges/weather-observation-station-7
SELECT DISTINCT CITY FROM STATION 
WHERE CITY LIKE '%A' OR CITY LIKE '%E' 
OR CITY LIKE '%I' OR CITY LIKE '%O' 
OR CITY LIKE '%U'

-- https://www.hackerrank.com/challenges/weather-observation-station-6
SELECT DISTINCT CITY FROM STATION 
WHERE CITY LIKE 'A%' OR CITY LIKE 'E%' OR 
CITY LIKE 'I%' OR CITY LIKE 'O%' OR CITY LIKE 'U%'

-- https://www.hackerrank.com/challenges/weather-observation-station-5
SELECT * FROM (
    SELECT CITY, LENGTH(CITY) FROM STATION ORDER BY LENGTH(CITY) ASC, CITY ASC LIMIT 1
) TEMP2
UNION ALL
SELECT * FROM (
    SELECT CITY, LENGTH(CITY) FROM STATION ORDER BY LENGTH(CITY) DESC, CITY ASC LIMIT 1
) TEMP2

-- https://www.hackerrank.com/challenges/weather-observation-station-4
SELECT COUNT(City) - COUNT(DISTINCT City) FROM Station

-- https://www.hackerrank.com/challenges/weather-observation-station-3
SELECT DISTINCT CITY FROM STATION WHERE ID%2=0

-- https://www.hackerrank.com/challenges/weather-observation-station-1
SELECT CITY,STATE FROM STATION

