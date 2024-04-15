declare
--x sailors.sname%type;
--x varchar2(10);
Sdetails sailors%ROWTYPE;
begin
select * into Sdetails from sailors where sid=22;
dbms_output.put_line(Sdetails.sid|| ' ' || Sdetails.sname|| ' ' ||Sdetails.srating);
end;
/