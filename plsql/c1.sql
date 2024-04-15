create table dept1 as select * from dept;
declare
    dept_no number(4) := 222;
begin
  delete from dept1 where deptno = dept_no;
    if sql%found then 
    insert into dept1    values (222, 'data', 'hyderbad');
   end if;
end;
/