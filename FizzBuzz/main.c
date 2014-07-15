//
//  main.c
//  FizzBuzz
//
//  Created by LaVelton R. Carroway on 05/26/2014.
//  Copyright (c) 2014 Rochee Software, LLC. All rights reserved.
//

/*
 Write a program that prints the numbers from 1 to 100. But for multiples of three print "Fizz" instead of the number and for the
 multiples of five print "Buzz". For numbers which are multiples of both three and five print "FizzBuzz".
 Step #1 - 1 to 100
 Step #2 - 3x print Fizz
 Step #3 - 5x print Buzz
 Step #4 - 3x & 5x print FizzBuzz
 Total time for completion: 5 minutes or less
 */

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{

    for(int iCounter = 1; iCounter <= 100; iCounter++)
    {
        if(iCounter % 3 == 0 && iCounter % 5 == 0)
        {
            fprintf(stdout,"FizzBuzz\n");
        }
        else if(iCounter % 3 == 0)
        {
            fprintf(stdout,"Fizz\n");
        }
        else if(iCounter % 5 == 0)
        {
            fprintf(stdout,"Buzz\n");
        }
        else
        {
            fprintf(stdout,"%d\n",iCounter);
        }
    }

    // NSAutoreleasePool * pool = [[NSAutoreleasePool alloc] init];

    // NSNumber *iNumb = [[NSNumber alloc] initWithInteger:1];

    //    int iCounter2 = 1;
    //    do
    //    {
    //        switch (iCounter2)
    //        {
    //            case 1:
    //                NSLog(@"FizzBuzz\n");
    //            case 3:
    //                NSLog(@"Fizz\n");
    //                break;
    //            case 5:
    //                NSLog(@"Buzz\n");
    //                break;
    //            default:
    //                NSLog(@"%d\n",iCounter2);
    //                break;
    //        }
    //        iCounter2 = iCounter2 + 1;
    //    }
    //    while(iCounter2 <= 15);

    //NSLog(@"NSNumber: %d\n",[iNumb intValue]);

    //[iNumb release];
    //[pool drain];

    return 0;
}
