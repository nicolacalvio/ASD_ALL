//
// Created by nicola on 14/08/22.
//

#ifndef ASD_DYNAMIC_H
#define ASD_DYNAMIC_H

#endif //ASD_DYNAMIC_H

/*algoritmo di fibonacci normale*/
int fibonacci_ricorsivo(int numero){
    return (numero <= 1) ? numero : fibonacci_ricorsivo(numero-1) + fibonacci_ricorsivo(numero-2);
}

/*algoritmo di fibonacci con metodo di tabulation (bottom up)*/
int fibonacci_memoization_aux(int numero, int *risultati, int counter){
    while(counter<=numero){
        risultati[counter] = risultati[counter-1] + risultati[counter-2];
        ++counter;
    }
    return risultati[counter-1]; //perchè il counter ad ogni ciclo aumenta sempre di uno anche alla fine
}

int fibonacci_bottom_up(int N)
{
    //if N = 2, we need to store 3 fibonacci members(0,1,1)
    //if N = 3, we need to store 4 fibonacci members(0,1,1,2)
    //In general to compute Fib(N), we need N+1 size array.
    int Fib[N+1],i;

    //we know Fib[0] = 0, Fib[1]=1
    Fib[0] = 0;
    Fib[1] = 1;

    for(i = 2; i <= N; i++)
        Fib[i] = Fib[i-1]+Fib[i-2];
    //il valore viene tenuto dentro l'array
    //last index will have the result
    return Fib[N];
}

int fibonacci_top_down(int N)
{
    if(N <= 1)
        return N;
    return fibonacci_top_down(N-1) + fibonacci_top_down(N-2);
    //il valore viene calcolato quando si chiude la ricorsione
}
