#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#define MAXLINES 5000 /* max #lines to be sorted */ 
char *lineptr[MAXLINES]; /* pointers to text lines */

int readlines1(char *lineptr[], int nlines); 
void writelines1(char *lineptr[], int nlines);

void qsort1(void *lineptr[], int left, int right, int (*comp)(void *, void *));

int numcmp(char *, char *);
/* qsort1: sort v[left]...v[right] into increasing order */ 
void qsort1(void *v[], int left, int right,
            int (*comp)(void *, void *)) 
{
    int i, last;

    void swap(void *v[], int, int);

    if (left >= right)  /* do nothing if array contains */
        return;         /* fewer than two elements */ 
    swap(v, left, (left + right)/2); 
    last = left;
    for (i = left+1; i <= right; i++) 
        if ((*comp)(v[i], v[left]) < 0)
            swap(v, ++last, i);      
    swap(v, left, last);
    qsort1(v, left, last-1, comp); 
    qsort1(v, last+1, right, comp);
}


/* numcmp1: compare s1 and s2 numerically */ 
int numcmp(char *s1, char *s2)
{
       double v1, v2;
       v1 = atof(s1);
       v2 = atof(s2);
       if (v1 < v2)
           return -1;
       else if (v1 > v2)
           return 1;
       else
           return 0;
}

void swap(void *v[], int i, int j) 
{
    void *temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

int readlines1(char *lineptr[], int nlines)
{

    *lineptr = "Hello";
    lineptr[1] = "ABC";
    return 2;
}

void writelines1(char *lineptr[], int nlines)
{

}
/* sort input lines */ 
int main(int argc, char *argv[]) 
{
    int nlines;         /* number of input lines read */ 
    int numeric = 0;     /* 1 if numeric sort */

    if (argc > 1 && strcmp(argv[1], "-n") == 0) 
        numeric = 1;
    if ((nlines = readlines1(lineptr, MAXLINES)) >= 0) { 
        qsort1((void**) lineptr, 0, nlines-1,
            (int (*numcmp)(void*, void*)));
        writelines1(lineptr, nlines);
        return 0;
    } 
    else {
        printf("input too big to sort\n"); 
        return 1;
    } 
}