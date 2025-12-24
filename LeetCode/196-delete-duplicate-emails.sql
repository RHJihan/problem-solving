DELETE FROM Person p
USING Person p2
WHERE p.Email = p2.Email AND p.Id > p2.Id;
