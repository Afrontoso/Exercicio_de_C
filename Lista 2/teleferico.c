#include <stdio.h>

int main(){
    int capacidade, totalAlunos, alunos, viagens, monitor;
    int soma = 0;

    scanf("%d\n%d", &capacidade, &totalAlunos);

    alunos = capacidade - 1; 
    monitor = totalAlunos % alunos;
    if (monitor != 0){
        viagens = totalAlunos / alunos;
        viagens++;
    }else{
        viagens = totalAlunos / alunos;
    }
    printf("%d", viagens);
    return 0;
}