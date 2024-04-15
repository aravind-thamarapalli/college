create or replace function f_si (p in number, q in number, r in number)
return number
is
si number(7,2); 
begin
  si := (p*q*r)/100;
  return si;
end;
/