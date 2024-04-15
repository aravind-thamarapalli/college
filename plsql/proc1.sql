declare
a int:=3;
b int:=4;
c int:=5;

PROCEDURE Sum(x int,y int,z in out int)
IS 
BEGIN 
dbms_output.put_line('x='||x); 
dbms_output.put_line('y='||y);
dbms_output.put_line('z='||z);
z:=z+10;
dbms_output.put_line('z='||z);
z:=x+y;  
dbms_output.put_line('Sum=z='||z); 
END; 

begin
Sum(a,b,c);
dbms_output.put_line('Sum=c='||to_char(c)); 
end;
/