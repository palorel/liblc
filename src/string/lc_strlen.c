int lc_strlen (char* p)
{
	int l;

	while (*p++)
		++l;
	return(l);
}
