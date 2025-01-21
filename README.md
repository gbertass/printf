# Projeto: Reimplementação da Função `printf()`

## Introdução
A função printf() em C é usada para imprimir informações na tela.
Neste projeto, nosso objetivo é reimplementar a função `printf()` da biblioteca C padrão (`libc`). A nossa versão, chamada de `ft_printf()`, deverá atender a uma série de requisitos específicos. Este documento fornece as instruções e detalhes técnicos para realizar essa tarefa, explicando a lógica por trás das conversões, o uso de funções variádicas e outras informações técnicas importantes.

## Requisitos
1. **Sem Gerenciamento de Buffer**: Não implementaremos o gerenciamento de buffer como o `printf()` original. Nossa função `ft_printf()` irá imprimir diretamente os valores.
2. **Conversões Suportadas**: Nossa função deverá lidar com as seguintes conversões:
   - `c` - Caractere
   - `s` - String
   - `p` - Endereço de memória
   - `d` - Inteiro (base 10)
   - `i` - Inteiro
   - `u` - Inteiro sem sinal (base 10)
   - `x` - Inteiro (base 16) minúsculo
   - `X` - Inteiro (base 16) maiúsculo
   - `%` - Caractere `%`
3. **Comparação com `printf()` Original**: A função será comparada com o `printf()` original para verificar sua compatibilidade e comportamento.
4. **Uso do `ar`**: Devemos usar o comando `ar` para criar nossa biblioteca, evitando o uso do `libtool`.
5. **Local da Biblioteca**: A biblioteca `libftprintf.a` deve ser criada na raiz do repositório.

## Conversões
As conversões referem-se aos caracteres após o sinal de `%` que especificam o tipo de dado a ser impresso. A tabela a seguir descreve as conversões que implementaremos e as funções auxiliares utilizadas para cada tipo de dado:

| Especificador | Tipo de Dado                    | Função             | Função na libft?  |
|---------------|----------------------------------|--------------------|-------------------|
| `c`           | Caractere                        | `ft_putchar_fd()`  | Sim               |
| `s`           | String                           | `ft_putstr()`      | Sim               |
| `p`           | Endereço de memória              | `ft_putpoint()`    | Não               |
| `d`           | Inteiro (base 10)                | `ft_putnbr_fd()`   | Sim               |
| `i`           | Inteiro                          | `ft_putnbr_fd()`   | Sim               |
| `u`           | Inteiro sem sinal (base 10)      | `ft_putunsignbr()` | Não               |
| `x`           | Inteiro (base 16) minúsculo      | `ft_puthex()`      | Não               |
| `X`           | Inteiro (base 16) maiúsculo      | `ft_puthex()`      | Não               |
| `%`           | Caractere `%`                    | `ft_putchar_fd()`  | Sim               |

##Funções Variádicas
1. **O Que São Funções Variádicas?
Funções variádicas são aquelas que podem receber um número variável de argumentos. Em C, essas funções são implementadas utilizando a biblioteca <stdarg.h>, que fornece ferramentas para manipular os argumentos passados para a função.

2. **Como Funciona o Armazenamento de Argumentos?
**Quando uma função é chamada, os argumentos são armazenados na pilha de memória em ordem inversa, ou seja, o primeiro argumento é armazenado na última posição e o último argumento é armazenado na primeira posição.

3. **Acessando os Argumentos Variádicos
**Para acessar os argumentos passados para uma função variádica, utilizamos as macros definidas em <stdarg.h>, como:

### Funções Variádicas

- **`va_start(va_list args, last)`**: Inicializa o ponteiro `args` para acessar os argumentos. O segundo parâmetro, `last`, é o último argumento fixo da função.
- **`va_arg(va_list args, tipo)`**: Acessa o próximo argumento da lista, de acordo com o tipo especificado.
- **`va_end(va_list args)`**: Finaliza o uso do ponteiro `args`, liberando os recursos.


4. **Para declarar uma função variádica, utilizamos a seguinte sintaxe:
  ```c
   tipo_de_retorno nome_da_função(tipo_de_dado nome_do_argumento, ...);
