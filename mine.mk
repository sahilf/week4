a.out :myclient.o mystack.o
	gcc myclient.o mystack.o
myclient.o:myclient.c mystack.h
	gcc -c myclient.c 
mystack.o:mystack.c mystack.h
	gcc -c mystack.c

