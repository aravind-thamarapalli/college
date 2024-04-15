declare
x boats.bid%type;

begin
select bid into x from boats where bname='Interlake';
dbms_output.put_line('Bid of Interlake is:'||x);

EXCEPTION
WHEN TOO_MANY_ROWS THEN dbms_output.put_line('More than one occurance of Interlake');

end;
/