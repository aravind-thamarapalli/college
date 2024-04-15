create or replace trigger trg4 before
update on stude
for each row
begin
  dbms_output.put_line('before update on '||:old.sub1);
  dbms_output.put_line('after update on '||:new.sub1);
end;
/