create or replace procedure stud_name(id in student.rollno%type)
is 
sname student.name%type;
begin
select name into sname from student where rollno=200;
dbms_output.put_line('Student name is:'||sname);
exception
when NO_DATA_FOUND then
dbms_output.put_line('The student with given ID is not present');
when TOO_MANY_ROWS then
dbms_output.put_line('The given ID has many names');
end;
/