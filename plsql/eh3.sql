--AIM: User defined exception
declare
a number(3);
MY_EXCEPTION EXCEPTION;

begin
a:=&a;
if(a>15)
then raise MY_EXCEPTION;
end if;
dbms_output.put_line('the value of a is '||a);

exception
when MY_EXCEPTION then
dbms_output.put_line('a is greater than 15');
end;
/