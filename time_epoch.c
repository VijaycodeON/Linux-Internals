#include<stdio.h>
#include<time.h>

//main function
int main()
{
    //declare variables of type time_h -> time.h is Timer ID. Times are encoded in seconds, since 00:00:00 UCT, January 1, 1970
    time_t my_time, ret_time;

    //if parameter passed is NULL -> function return the time since Epoch in seconds
    ret_time = time(NULL);
    //if parameter passed is non-NULL -> Function stores the epoch time in the given memory
    ret_time = time(&my_time);

    //error check condition. -1 return value if time() sys call fails.
    if( ret_time == -1 )
    {
	printf("time system call failed\n");
	//terminate main function.
	return 1;
    }

    //print messages, both prints the same epoch time.
    printf("epoch time is %ld\n", ret_time);
    printf("epoch time is %ld\n", my_time);
     
    return 0;
}


