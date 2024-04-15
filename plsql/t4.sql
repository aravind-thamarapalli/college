create or replace trigger trg5 before
delete on stude
for each row
begin
  dbms_output.put_line('before delete on '||:old.sid ||' ' ||:old.sub1);
end;
/