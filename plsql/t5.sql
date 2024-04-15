create or replace trigger trg6 after
delete on stude 
for each row
begin
  dbms_output.put_line('after deletion '|| :new.sid ||' '|| :new.sub1);
end;
/