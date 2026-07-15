#include<stdio.h>

void main()
{
    int ip_frame[200], op_frame[200];
    int i, j = 0, n;
    int count = 0;
    printf("Enter stuffed frame length: ");
    scanf("%d", &n);
    printf("Enter stuffed frame (0's and 1's only):\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &ip_frame[i]);
    }
    for(i = 0; i < n; i++)
    {
        op_frame[j++] = ip_frame[i];
        if(ip_frame[i] == 1)
        {
            count++;
            if(count == 5)
            {
                i++;       
                count = 0;
            }
        }
        else
        {
            count = 0;
        }
    }
    printf("\nAfter Bit De-stuffing the frame is:\n");
    for(i = 0; i < j; i++)
    {
        printf("%d", op_frame[i]);
    }
    printf("\n");
}
	 	
	 
