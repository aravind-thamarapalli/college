--Example for Raising User-defined Exceptions:

/*Users can define their own exceptions according to the need by using 
EXCEPTION keyword. 
These user-defined exceptions can be raised by using RAISE command.*/ 

--In this example division is performed on two float variables x and y.

DECLARE
x float:=&x; /*taking value at run time*/ 
y float:=&y; /*taking value at run time*/ 
result float; 
excp1 EXCEPTION; 
excp2 EXCEPTION; 

BEGIN
IF y=0 then
	RAISE excp1; 
ELSIF y > x then
	RAISE excp2; 
END IF; 
result:= x / y; 
dbms_output.put_line('the result is:'||result); 

----Exception handling section begins here--
EXCEPTION  	

WHEN excp1 THEN
	dbms_output.put_line('Error'); 
	dbms_output.put_line('division by zero not allowed'); 

WHEN excp2 THEN
	dbms_output.put_line('Error'); 
	dbms_output.put_line('y is greater than x. Please check the input'); 
END;
/