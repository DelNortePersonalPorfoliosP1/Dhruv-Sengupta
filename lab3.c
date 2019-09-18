//
//  lab3.c
//  pythagoryboi
//
//  Created by Sengupta, Dhruv on 9/18/19.
//  Copyright © 2019 Sengupta, Dhruv. All rights reserved.
//

#include "lab3.h"
//
//  main.c
//  lab2
//
//  Created by Sengupta, Dhruv on 9/12/19.
//  Copyright © 2019 Sengupta, Dhruv. All rights reserved.
//

#include <stdio.h>

#include <stdio.h>

void main()
{
    int arr1[100];
    int i, mx, mn, n;
    
    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&n);
    
    printf("Input %d elements in the array :\n",n);
    for(i=0;i<n;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&arr1[i]);
    }
    
    
    mx = arr1[0];
    mn = arr1[0];
    
    for(i=1; i<n; i++)
    {
        if(arr1[i]>mx)
        {
            mx = arr1[i];
        }
        
        
        if(arr1[i]<mn)
        {
            mn = arr1[i];
        }
    }
    printf("Maximum element is : %d\n", mx);
    printf("Minimum element is : %d\n\n", mn);
}

