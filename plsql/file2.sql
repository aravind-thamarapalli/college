declare
a int:=3;
b int:=4;
c int;

function Summation(x int,y int)
return int
IS 
--declare
z int;
BEGIN 
dbms_output.put_line('x='||x); 
dbms_output.put_line('y='||y);
z:=x+y;
return z;
END; 

begin
c:=Summation(a,b);
dbms_output.put_line('Sum=c='||c); 
end;
/