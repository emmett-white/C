/*
  * Mini-Project: IP Address Validator
  * Author: Emmett
  * Git: github.com/emmett-white/C/tree/master/ip-validator
  * Date: 20th April - Copyright (C) 2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char
		input[20],
		ip = 1,
		n = 0,
		i,
		
		*p;
	
	printf("Enter IP address:\n");
	scanf("%20s", input);
	
	printf("%s\n", input);
	printf("Validating...\n");
	
	p = strtok (input, ".");
	
	while (p) {
		char
			ip_ok = 1;
			
		int length = strlen(p);
		
		++n;
		
		if ((length > 0) && (length < 4)) {
			for (i = 0; i < length; ++i)
				if (!(isdigit(p[i])))
					ip_ok = 0;
		} else ip_ok = 0;
		
		if (ip_ok == 1)
			if (atoi(p) > 255)
				ip_ok = 0;
				
		if (n > 4)
			ip_ok = 0;
			
		if (!(ip_ok))
			ip = 0;
			
		printf("%d. %s", n, p);
		
		if (ip_ok)
			printf(" Valid.\n");
		else
			printf(" Invalid.\n");
			
		p = strtok (NULL, ".");
	}
	
	if (ip && (n == 4))
		printf("Valid IP Address.");
	else
		printf("Invalid IP Address.");
	return 0;
}
