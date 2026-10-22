# Caixa Eletrônico — Master Bank

## Sobre o projeto

Este projeto foi desenvolvido para a **Atividade 02 — Caixa Eletrônico**, da disciplina de Algoritmos e Pensamento Computacional.

O programa simula um caixa eletrônico simplificado, permitindo realizar saques a partir de um saldo inicial de R$ 500. Ele valida o valor solicitado e calcula a quantidade de cédulas necessárias para compor o saque.

## Objetivos

- Aplicar conceitos de lógica de programação.
- Utilizar variáveis e estruturas condicionais.
- Implementar estruturas de repetição para validar entradas.
- Utilizar uma função separada para distribuir as cédulas.
- Aplicar divisão inteira e módulo (`%`) nos cálculos.
- Testar o comportamento do programa com entradas válidas e inválidas.

## Funcionalidades

- Exibição do saldo inicial.
- Solicitação do valor do saque.
- Validação do valor informado.
- Atualização do saldo após um saque válido.
- Distribuição de cédulas de R$ 100, R$ 50, R$ 20, R$ 10 e R$ 5.
- Solicitação de um novo valor quando a entrada é inválida.

## Regras de validação

Para que o saque seja realizado, o valor informado deve:

1. Ser maior que zero.
2. Ser múltiplo de 5.
3. Ser menor ou igual ao saldo disponível.

Caso alguma condição não seja atendida, o programa informa que o valor é inválido e solicita uma nova entrada.

## Lógica do algoritmo

O funcionamento do programa é dividido em duas partes principais.

### 1. Validação e realização do saque

O programa inicializa o saldo em R$ 500 e solicita o valor do saque. Uma estrutura de repetição mantém a solicitação ativa enquanto o valor for inválido.

Quando o valor atende às regras de validação, ele é subtraído do saldo disponível. Em seguida, o programa chama a função responsável pela distribuição das cédulas.

### 2. Distribuição das cédulas

A função `distribuicao_de_notas()` recebe o valor do saque e calcula a quantidade de cédulas necessárias, começando pela maior denominação.

Para isso, utiliza divisão inteira para determinar a quantidade de cédulas e o operador módulo (`%`) para calcular o restante do valor.

São consideradas cédulas de R$ 100, R$ 50, R$ 20, R$ 10 e R$ 5.

O programa exibe somente as denominações cuja quantidade seja maior que zero.

## Variáveis utilizadas

| Variável | Tipo | Finalidade |
|---|---|---|
| `saldo` | Inteiro | Armazena o saldo disponível na conta. |
| `valor_do_saque` | Inteiro | Armazena o valor informado pelo usuário. |
| `verificador_valor_invalido` | Lógico | Controla a repetição durante a validação do saque. |
| `notas100` | Inteiro | Armazena a quantidade de cédulas de R$ 100. |
| `notas50` | Inteiro | Armazena a quantidade de cédulas de R$ 50. |
| `notas20` | Inteiro | Armazena a quantidade de cédulas de R$ 20. |
| `notas10` | Inteiro | Armazena a quantidade de cédulas de R$ 10. |
| `notas5` | Inteiro | Armazena a quantidade de cédulas de R$ 5. |
| `resto` | Inteiro | Armazena o valor restante durante o cálculo das cédulas. |

## Testes realizados

Os testes abaixo foram executados no terminal com saldo inicial de R$ 500 em cada execução.

| Valor do saque | Resultado | Análise |
|---:|---|---|
| R$ 0 | Inválido | O programa rejeita o valor e solicita nova entrada. |
| R$ 50 | Válido | Saldo atualizado para R$ 450; 1 cédula de R$ 50. |
| R$ 95 | Válido | Saldo atualizado para R$ 405; 1 cédula de R$ 50, 2 de R$ 20 e 1 de R$ 5. |
| R$ 123 | Inválido | O programa rejeita o valor por não ser múltiplo de 5. |
| R$ 285 | Válido | Saldo atualizado para R$ 215; 2 cédulas de R$ 100, 1 de R$ 50, 1 de R$ 20, 1 de R$ 10 e 1 de R$ 5. |
| R$ 1005 | Inválido | O programa rejeita o valor por ultrapassar o saldo disponível. |

## Tecnologias e conceitos

- Linguagem C
- Variáveis e tipos de dados
- Estruturas condicionais (`if` e `else`)
- Estrutura de repetição (`while`)
- Funções
- Divisão inteira
- Operador módulo (`%`)
- Entrada e saída de dados no terminal

## Como executar

É necessário ter o compilador GCC instalado.

**1. Compile o programa:**

```bash
gcc caixa_eletronico.c -o caixa_eletronico
```

**2. Execute o programa no Linux:**

```bash
./caixa_eletronico
```

## Aprendizados

O desenvolvimento do projeto permitiu praticar a construção de algoritmos, a validação de entradas, o uso de estruturas condicionais e de repetição e a organização do código por meio de uma função específica para a distribuição de cédulas.

Também foi possível verificar a importância dos testes para identificar se o programa responde corretamente a diferentes situações.

---

**Projeto acadêmico — Atividade 02: Caixa Eletrônico**

Disciplina: Algoritmos e Pensamento Computacional.
