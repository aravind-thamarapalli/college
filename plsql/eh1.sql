--Example of Built-in exception:

/*This example adds an exception-handling section which catches 
ZERO_DIVIDE exception raised in the executable section and 
displays an error message.*/

DECLARE
result NUMBER;
BEGIN
result := 1 / 0;

EXCEPTION
      WHEN ZERO_DIVIDE THEN
         DBMS_OUTPUT.PUT_LINE( 'Divisor cannot be zero' );
END;
/

--Output:
--	Divisor cannot be zero 
