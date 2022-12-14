#include <bitset>
#include <stdio.h>


void clara()
{
	int b=20; // put `b` on the stack
	(void)b;
	printf("dad stinks\n");
	// infinite recursion:
	// stack overflow is bad
	//clara();
	int *p =(int *)malloc(sizeof(int));
	printf("%p\n",p);
	//0x at the beginning of the print means hexadecimal
	//base 10 - base 2 - base 16
	//0 - 0 - 0 
	//1 - 1 - 1
	//2 - 10 - 2 
	//3 - 11 - 3
	//4 - 100 - 4
	//5 - 101 - 5
	//6 - 110 - 6
	//7 - 111 - 7
	//8 - 1000 - 8
	//9 - 1001 - 9
	//10 - 1010 - a
	//11 - 1011 - b
	//12 - 1100 - c
	//13 - 1101 - d
	//14 - 1110 - e
	//15 - 1111 - f
	//16 - 10000 - 10
	//17 - 10001 - 11
	//dereference: 
	*p=5;
	//give the dereferenced pointer a new name that doesn't really exist:
	int & c=*p;
	c=6; //this is exactly the same as typing *p=6
	printf("%d\n",c);
	printf("%d\n",*p);
	free(p);
}
int main()
{
	int8_t a; // put `a` on the stack
	printf("%ld\n",sizeof(a));
	a=-5;
	printf("%s\n",std::bitset<sizeof(a)*8>(a).to_string().c_str());
	clara();
	printf("back to main\n");
	FILE *fp=fopen("/usr/share/dict/words","r");
	char *line=0;
	size_t len;
	ssize_t linelen;
	printf("enter the number on sides of your dice.");
	linelen= getline(&line,&len, stdin);
	printf("you typed: %s\n",line);		
	int n=atoi(line);
	printf("number of sides %d\n",n);
	// talk about this:
	//srand48(time(0));
	int r=lrand48();
	printf("random number %d\n",r);
	linelen= getline(&line,&len, fp);
	printf ("len: %ld\n",len);
	printf ("linelen: %ld\n", linelen);
	printf ("line: %s\n", line);
	free (line);
	fclose(fp);
	return 0;
}


