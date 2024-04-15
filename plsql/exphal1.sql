create or replace procedure stud(id in student.rollno%type)
is 
sname student.name%type;
begin
select name into sname from student where rollno=id;
dbms_output.putline('name is:'||sname);
exception
	when NO_DATA_FOUND then
		dbms_output.put_line('data not available');
end;
/