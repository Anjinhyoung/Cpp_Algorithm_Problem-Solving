-- 코드를 작성해주세요
SELECT SUM(SCORE) AS SCORE,
e.EMP_NO, e.EMP_NAME,e.POSITION,e.EMAIL
FROM HR_DEPARTMENT d
JOIN HR_EMPLOYEES e
ON d.DEPT_ID = e.DEPT_ID
JOIN HR_GRADE g
ON e.EMP_NO = g.EMP_NO
GROUP BY e.EMP_NO, e.EMP_NAME,e.POSITION,e.EMAIL
ORDER BY SCORE DESC
LIMIT 1;
