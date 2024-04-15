declare
ip_sid number;
PROCEDURE get_data(ip_sid number)
IS 
sdetails sailors%ROWTYPE;
BEGIN 
select * into sdetails from sailors where sid=ip_sid;
dbms_output.put_line(sdetails.sid||' '||sdetails.sname);
END; 

begin
ip_sid:=&ip_sid;
get_data(ip_sid);
end;
/