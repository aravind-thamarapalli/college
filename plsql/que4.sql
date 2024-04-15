create or replace procedure stud(id in students.sid%type)
is 
s students%rowtype;
begin
select * into s from students where sid=id;
dbms_output.put_line(s.sid||' '||s.name||' '||s.age);
exception
when NO_DATA_FOUND then
dbms_output.put_line('The student with given ID is not present');
when TOO_MANY_ROWS then
dbms_output.put_line('The given ID has many names');
end;
/