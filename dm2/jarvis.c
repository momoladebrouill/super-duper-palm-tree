#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

int N = 100;
struct stack_t {
    int *elements;
    int size;
};
typedef struct stack_t *stack;

stack new_stack(void){
    stack s = malloc(sizeof(struct stack_t));
    s->elements = malloc(sizeof(int)*N);
    s->size = 0;
    return s;
}

bool is_empty(stack s){return s->size == 0;}

void push(int i, stack s){
    assert(s->size < N);
    s->elements[s->size] = i;
    s->size = s->size+1;
}

int top(stack s){
    assert(s->size > 0);
    return s->elements[s->size-1];
}

int pop(stack s){
    int i = top(s);
    s->size = s->size - 1;
    return i;
}

void destroy_stack(stack s){
    free(s->elements);
    free(s);
}


int plus_bas(int tab[][2],int n){
    int j=0;
    for(int i=1;i<n;i++){
        if(tab[i][1]<tab[j][1] 
                || (tab[i][1]==tab[j][1] && tab[i][0]<tab[j][0] ))
            j = i;
    }
    return j;
}

int orient(int tab[][2],int i, int j, int k){
    int r=(tab[k][1]-tab[i][1])*(tab[j][0]-tab[i][0])
        -(tab[k][0]-tab[i][0])*(tab[j][1]-tab[i][1]);
    return (r ? r/abs(r): 0);

}

int prochain_point(int tab[][2],int n,int i){
    int j=0;
    for(int k=0;k<n;k++){
        if(orient(tab,i,j,k)<=0 && k!=i)
            j = k;
    }
    return j;
}

int conv_jarvis(int tab[][2], int n, int *env){
    int i=plus_bas(tab,n);
    int ind=0;
    int p=i;
    do{
        env[ind++]=p;
        p=prochain_point(tab,n,p);
    }while(i!=p);
    return ind;
}


void maj_es(int tab[][2],stack es,int i){
    int t;
    int n;
    while(es->size >= 2){
        t=pop(es);
        n=top(es);
        push(t,es);
        if(orient(tab,i,t,n)>=0){
            break;
        }
        pop(es);
    }
    push(i,es);
}


stack conv_graham(int tab[][2],int n){
    stack es=new_stack();
    stack ei=new_stack();
    for(int i=0;i<n;i++){
        maj_es(tab,es,i);
        maj_ei(tab,ei,i);
    }
    printf("Done.\n");
    for(int i=es->size;i--;)
        printf("%d ",pop(es));
    return es;
}


int main(void){
    int tab[][2] = {
        { 0, 0 }, { 1, 4 }, { 1, 8 }, { 4, 1 }, { 4, 4 }, { 5, 9 },
        { 5, 6 }, { 7, -1 }, { 7, 2 }, { 8, 5 }, { 11, 6 }, { 13, 1 }
    };
    int *env = malloc(15*sizeof(int));
    int nb = conv_jarvis(tab,12,env);
    for(int i=0;i<nb;i++) printf("%d ",env[i]);
    printf("\n");
    conv_graham(tab,12);
}


