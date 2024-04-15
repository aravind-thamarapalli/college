create or replace trigger trg3 before
update on stude
for each row
begin
  dbms_output.put_line('before update on '||:new.sid);
end;
/