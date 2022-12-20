---
title: "Devoir maison"
author: Bartolomeo Ryan
subtitle: "Enveloppe Convexe"
geometry: margin=2cm
date: Janvier 2023
mainfont: Times 
output: pdf_document
---

# Question 1

```c
int plus_bas(int tab[][2],int n){
    int j = 0;
    for(int i = 1; i < n;i++){
        if(tab[i][1]<tab[j][1] 
                || (tab[i][1]==tab[j][1] && tab[i][0]<tab[j][0]))
            j = i;
    }
    return j;
}
```
# Question 2
Cette fonction termine car la boucle est une boucle `for` (variant de boucle : $n-i$).  
Soit I l'invariant:  
$\forall k \in [\![ 0,i ]\!],  p_k.y<p_j.y \lor p_k.x=p_j.x$

