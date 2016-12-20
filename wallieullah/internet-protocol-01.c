#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,string[123],s,s1[2323],flag=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%s",string);
        s=strrev(string);
        if(strcmp(string,s)==0/*string[i]!=string1[n-i-1]*/)
        {
            //printf("%s",string);
            flag=1;
            if(flag==1)
        {
           printf("%s",string);
        }
        else
        {
            printf("nothing");
        }
        }
        /*else
        {
            printf("nothing\n");
        }
        */


    }
    return 0;
}
/*#include <stdio.h>
#include <string.h>
int main()
{
char string1[20];
int i,length,n;
int flag=0;
//printf("Enter a string:");
scanf("%d",&n);
scanf("%s", string1);
length=strlen(string1);
for(i=0;i<n;i++)
{
if(string1[i]!=string1[n-i-1])
{
flag=1;
break;
}
}
if(flag)
{
printf("%s is not a palindrome", string1);
}
else
{
printf("%s is a palindrome", string1);
}
return 0;
}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
    int n,d,i,count=0;
    int s;
    int  string[1212]={0};
    scanf("%d%d",&n,&d);
    //while(d--)
    for(i=0;i<d;i++)
    {
    scanf("%s",&string);
    if(string==1)
    count++;
    }
    printf("%d",count+1);
    return 0;
}
/*#include<stdio.h>
int main()
{
    int t;
    while(scanf("%d",&t)!=EOF)
    {
     /*   if(t%4==0||t%7==0||t%47==0||t%74==0||t%477==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    */
/*    printf("%d\n",t+1); */
  /*  }

        return 0;
}
*/
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
  int string[232323],i,s,s1;
  scanf("%s",string);
  s1=strlen(string);
  for(i=0;i<=s1;i++)
  {
      s=string[i];
      if(string[i++]=='0000000'||string[i++]=='1111111')
      {
          printf("YES\n");
      }
      else
      {
          printf("NO\n");
      }


  }
  return 0;

}

*/

/*#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    char s[1000]={"1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950515253545556575859606162636465666768697071727374757677787980818283848586878889901001011021031041051060107108109110111112113114115116117118119120121122123124125126127128129130131132133134135136137138139140141142143144145146147148149150151152153154155156157158159160161162163164165166167168169"};
    while(scanf("%d",&t)!=EOF)
    {
    printf("%c\n",s[t-1]);
    }
    return 0;
}
/*116117118119120121122123124125126127128129130131132133134135136137138139140141142143144145146147148149150151152153154155156157158159160161162163164165166167168169
170
171
172
173
174
175
176
177
178
179
180
181
182
183
184
185
186
187
188
189
190
191
192
193
194
195
196
197
198
199
200
201
202
203
204
205
206
207
208
209
210
211
212
213
214
215
216
217
218
219
220
221
222
223
224
225
226
227
228
229
230
231
232
233
234
235
236
237
238
239
240
241
242
243
244
245
246
247
248
249
250
251
252
253
254
255
256
257
258
259
260
261
262
263
264
265
266
267
268
269
270
271
272
273
274
275
276
277
278
279
280
281
282
283
284
285
286
287
288
289
290
291
292
293
294
295
296
297
298
299
300
301
302
303
304
305
306
307
308
309
310
311
312
313
314
315
316
317
318
319
320
321
322
323
324
325
326
327
328
329
330
331
332
333
334
335
336
337
338
339
340
341
342
343
344
345
346
347
348
349
350
351
352
353
354
355
356
357
358
359
360
361
362
363
364
365
366
367
368
369
370
371
372
373
374
375
376
377
378
379
380
381
382
383
384
385
386
387
388
389
390
391
392
393
394
395
396
397
398
399
400
401
402
403
404
405
406
407
408
409
410
411
412
413
414
415
416
417
418
419
420
421
422
423
424
425
426
427
428
429
430
431
432
433
434
435
436
437
438
439
440
441
442
443
444
445
446
447
448
449
450
451
452
453
454
455
456
457
458
459
460
461
462
463
464
465
466
467
468
469
470
471
472
473
474
475
476
477
478
479
480
481
482
483
484
485
486
487
488
489
490
491
492
493
494
495
496
497
498
499
500
501
502
503
504
505
506
507
508
509
510
511
512
513
514
515
516
517
518
519
520
521
522
523
524
525
526
527
528
529
530
531
532
533
534
535
536
537
538
539
540
541
542
543
544
545
546
547
548
549
550
551
552
553
554
555
556
557
558
559
















































#include<stdio.h>
#include<string.h>
int main()
{
    char array[110];
    int i,size;
    scanf("%d",&size);
    //for(i=0;i<size;i++)
    //{
    scanf("%s",array);
    //}
    while(size--)
         {
             int length=(int)strlen(array);
             if(length>10)
             {
             printf("%c%d%c",array[0],length-2,array[length-1]);
             }
             else
            {
            printf("%s",array);
            }
         }
         return 0;
}
/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct s
{
    int a;
    int b;
    int i;
    int sum;
};
int main()
{
    //int a,b,i,sum=0;
    struct s s1;
    s1.sum=0;
    scanf("%d%d",&s1.a,&s1.b);
    if(s1.a<s1.b)
    {
    for(s1.i=s1.a;s1.i<s1.b;s1.i++)
    {

        if(s1.i%2!=0)
        s1.sum=s1.sum+s1.i;

    }
    printf("%d\n",s1.sum);
    }
    else if(s1.a>s1.b)
    {
    for(s1.i=s1.a-1;s1.i>s1.b;s1.i--)
    {

        if(s1.i%2!=0)
        s1.sum=s1.sum+s1.i;

    }
    printf("%d\n",s1.sum);
    }
    return 0;
}
/*#include<stdio.h>
#include<string.h>
typedef enum
{
    CHAR,SHORT,INTEGER,FLOAT,DOUBLE,STRING;
}type;
typedef union
{
    char Character;
    short Short;
    int Integer;
    float Float;
    double Double;
    char String[20];
}Value;
typedef struct
{
    Type type;
    Value value;
}Variant;
void foo(Variant v);
int main()
{
    Variant v1;
    v1.type=INTEGER;
    v1.value.Integer=100;
    foo(v1);
}
void foo(Variant v)
{
    if(v.type==CHAR)
    {
        printf("%c",v.value.Character);
    }
    else if(v.type==SHORT)
    {
        printf("%c",v.value.Character);
    }
    else if(v.type==INTEGER)
    {
        printf("%c",v.value.Character);
    }
    else if(v.type==FLOAT)
    {
        printf("%c",v.value.Character);
    }
    else if(v.type==DOUBLE)
    {
        printf("%c",v.value.Character);
    }
    else if(v.type==STRING)
    {
        printf("%c",v.value.Character);
    }

}
*/
/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct s
{
    int a;
    int b;
    int i;
    int sum;
};
int main()
{
    //int a,b,i,sum=0;
    scanf("%d%d",&a,&b);
    if(a<b)
    {
    for(i=a;i<b;i++)
    {

        if(i%2!=0)
        sum=sum+i;

    }
    printf("%d\n",sum);
    }
    else if(a>b)
    {
    for(i=a-1;i>b;i--)
    {

        if(i%2!=0)
        sum=sum+i;

    }
    printf("%d\n",sum);
    }
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
int test,cases=0;
scanf("%d",&cases);
char dot;
int a,b,c,d;
bitset<8> A,B,C,D;
while(test--)
{
cin>>a>>dot>>b>>dot>>c>>dot>>d;
cin>>A>>dot>>B>>dot>>C>>dot>>D;
if(A==a&&B==b&&C==c&&D==d)
cases++;
printf("Case %d:Yes\n",cases);
else
cases++;
printf("Case %d:No\n",cases);
}
return 0;
}
*/
/*#include<stdio.h>
int main()
{
    static int t,k;
    char ch;
    scanf("%d%*c",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%c%*c",&ch);
        if(ch>='A'&&ch<='Z')
        {
            printf("Uppercase Character\n");
        }
        else if(ch>='a'&&ch<='z')
        {
            printf("Lowercase Character\n");
        }
        else
        {
            printf("Special Character\n");
        }
    }
    return 0;
}
*/
/*#include<stdio.h>
typedef union data
{
int x;
char ch;
}list;
int main()
{

    //union data var;
    printf("%d\n",sizeof(list));
    list var;
    var.x=23;
    var.ch='a';
    printf("%d\n",var.x);
    printf("%c\n",var.ch);
    getch();
    return 0;
}
*/
/*#include<stdio.h>
#include<string.h>
typedef struct demo
{

    int n;//4
    double d;//8
    char str[20];//24
}Demo;
int main()
{
    Demo d;
    d.n=100000;
    d.d=123456700.01;
    strcpy(d.str,"this is demo");
    //printf("%d",);
    printf("%d\n",d.n);
    printf("%lf\n",d.d);
    printf("%s\n",d.str);
    //printf("%d",sizeof(d));
    return 0;
}
*/


