create or replace trigger trg2 after
insert on stude
for each row
begin
  dbms_output.put_line('after insert on '||:new.sid);
end;
/