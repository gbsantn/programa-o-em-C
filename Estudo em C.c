
Em código C, int é uma palavra-chave usada para declarar uma variável ou função cujo valor é do tipo inteiro.
Significa "integer" e representa números inteiros (positivos e negativos, incluindo zero), mas não frações ou decimais.

VARIÁVEIS

SEGUEM SEMPRE O MODELO Tipo_variável nome_variável

int idade;     // Declara uma variável inteira chamada "idade"
 
float altura;   // Declara uma variável de ponto flutuante chamada "altura"
 
double salario; // Declara uma variável de ponto flutuante de dupla precisão chamada "salario"
 
char opcao;    // Declara uma variável de caractere chamada "opcao"

ENTRADA E SAIDA DE DADOS

Exemplo de uso com variáveis: ao utilizar o printf para imprimir variáveis, 
é necessário colocar o nome da variável e o especificador de formato. Veja a sintaxe a seguir.

printf(“%formato1 %formato2”, variável1, variável2);


Aqui, "%formato1 %formato2" são os especificadores de formato correspondentes aos tipos das variáveis
que você deseja exibir. Esses especificadores são elementos essenciais para controlar a formatação
dos dados nas funções de entrada e saída da linguagem C, como printf e scanf. Cada especificador de
formato é precedido por um caractere % e indica o tipo de dado da variável que será exibida.
Para cada variável que você deseja imprimir, é necessário acrescentar um especificador de formato correspondente.

 

A seguir, você tem uma lista dos principais especificadores utilizados:

 

%d: // Imprime um inteiro no formato decimal.
 
%i: // Equivalente a %d.
 
%f: // Imprime um número de ponto flutuante no formato padrão.
 
%e: // Imprime um número de ponto flutuante na notação científica.
 
%c: // Imprime um único caractere.
 
%s: // Imprime uma cadeia (string) de caracteres.



funçoes para entrada de dados
gets // lê uma linha inteira do teclado (stdin) até encontrar um caractere de nova linha. 
Não é segura (pode causar problemas de segurança) e foi removida do padrão C11.

fgets // Lê uma linha de um arquivo ou do teclado (stdin),
com limite de tamanho definido. É mais segura que gets. Exemplo: fgets(buffer, tamanho, stdin);

getc // Lê um caractere de um arquivo especificado. Exemplo: getc(arquivo);

getch // Lê um caractere do teclado, sem precisar pressionar Enter e sem exibi-lo na tela. 
Não faz parte do padrão C, mas está disponível em algumas bibliotecas (como conio.h no Windows).


funçoes para saida de dados



putc //Escreve um caractere em um arquivo especificado. Exemplo: putc('A', arquivo);
puts //Escreve uma string (seguida de uma nova linha) na saída padrão (terminal). Exemplo: puts("Olá!");
fputs //Escreve uma string em um arquivo (não adiciona nova linha automaticamente). Exemplo: fputs("Texto", arquivo);
putchar //Escreve um único caractere na saída padrão (terminal). Exemplo: putchar('A');

leitura de dados em arquivos

A função scanf é usada para ler dados fornecidos pelo usuário e armazená-los em variáveis.
Pense em scanf como uma maneira de pegar informações do mundo exterior e colocá-las dentro 
das "caixas" (variáveis) do seu programa.


Sintaxe básica de scanf

A forma geral do comando scanf é a seguinte:


scanf(''formato'', &variavel);


Aqui, "formato" especifica o tipo de dado que você espera que o usuário insira,
e &variavel é o endereço da variável onde o dado será armazenado.


Atenção
Você precisa sempre colocar o caractere “&” antes de cada variável que será lida.

fscanf //Lê dados formatados de um arquivo, semelhante ao scanf, mas a fonte é um arquivo.
 Exemplo: fscanf(arquivo, "%d", &num);


fgets // (já explicada acima) Lê uma linha de um arquivo para uma string.


escrita de dados em arquivos

fprintf // Escreve dados formatados em um arquivo, semelhante ao printf, mas o destino é um arquivo. 
Exemplo: fprintf(arquivo, "%d", num);

fputs// (já explicada acima) Escreve uma string em um arquivo.
