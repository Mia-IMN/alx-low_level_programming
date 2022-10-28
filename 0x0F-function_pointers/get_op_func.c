
/**
 *get_op_func - selects the correct function to perform an operation
 *@s: char pointer
 *Return: 0
 */

int (*get_op_func(char *s))(int, int)
{
if (s == "+")
return (*op_add);
if (s == "-")
return (*op_sub);
if (s == "*")
return (*op_mul);
if (s == "/")
return (*op_div);
if (s == "%")
return (*op_mod);
if (s != "+" || s != "-" || s != "*" || s != "%" || s != "/")
return (NULL);
}
