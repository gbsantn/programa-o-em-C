#include <stdio.h>

int main (){
    int idade =25; //int armazena valor inteiro (0,1,2,3,-1)
    int Idade; //forma uma variável diferente de idade (com i minúsculo)
    int quantidade =1;
    float altura =1.75; //permite trabalhar com casas decimais ao contrario do int
    double peso =90.3; //armazena valores maiores que o float e aumenta a precisão
    char letra = "A"; //armazena caracteres (uma letra)
    char nome[20] = "sergio";/*armazena strings (palavras), a variavel char armazena somente um caracter, 
    mas utilizando o array [20] (vetor de char) ele passsa a poder armazenar 20 juntando vários char */
    int _teste;//pode usar underline antes
    int teste_2;//pode usar numero no final, mas nunca no inicio

    idade = 25; //aqui estou chamando de novo a variável idade, que foi iniciada acima com o mesmo valor

    quantidade = 10; //aqui estou SUBSTITUINDO o valor da variavel quantidade que também já foi iniciada acima
}
