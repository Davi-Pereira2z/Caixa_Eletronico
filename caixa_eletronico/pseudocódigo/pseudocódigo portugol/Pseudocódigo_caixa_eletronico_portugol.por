programa {

  // Armazena o saldo disponível na conta e o valor solicitado para saque.
  inteiro saldo = 500, valor_do_saque

  // Representam a quantidade de notas de cada denominação necessária para realizar o saque.
  inteiro notas100, notas50, notas20 ,notas10 ,notas5

  // Armazena o valor restante após a retirada de cada denominação de nota.
  inteiro resto

  // Controla a repetição do loop enquanto o valor informado for inválido.
  logico verificador_valor_invalido = verdadeiro
 

  funcao inicio() {

    // Inicio do programa

    // Elemento de organização visual
    escreva("---------------------------------\n")
    escreva("Seja bem-vindo ao Master Bank!\n")
    escreva("---------------------------------\n")
    escreva("O saldo atual é de: R$",saldo,"\n")
    escreva("---------------------------------\n")
    escreva("\n")

    escreva("Digite um valor de saque: ")
    leia(valor_do_saque)
    escreva("---------------------------------\n")


    // loop que contém uma estrutura if / else para validar o valor do saque. Se o valor for inválido, o loop solicita uma nova entrada até que o 
    // usuário informe um valor positivo, múltiplo de 5 e dentro do saldo disponível.
    enquanto(verificador_valor_invalido == verdadeiro)
    {
      se((valor_do_saque % 5 == 0) e (valor_do_saque > 0) e (valor_do_saque <= saldo))
      {
        saldo = saldo - valor_do_saque
        escreva("Saldo atualizado para: R$",saldo,"\n")

        escreva("---------------------------------\n")
        escreva("\n")
        
        distribuicao_de_notas(valor_do_saque)

        //Encerra o loop após a validação e a realização do saque.
        verificador_valor_invalido = falso
      }
      senao
      {
          escreva("Valor de saque invalido:\n->(Não multiplo de 5)\n->(Menor ou igual a 0)\n->(Maior que 500)\ntente novamente!\n")
          
          escreva("---------------------------------\n")
          escreva("Informe valor de saque: ")
          leia(valor_do_saque)
          escreva("---------------------------------\n")
        }
    }
  }

    // Função responsável por calcular e exibir a quantidade de notas de cada denominação.
   funcao distribuicao_de_notas(inteiro valor_do_saque) {

      notas100 = valor_do_saque / 100

      // Calcula o restante do saque após descontar o valor correspondente às notas de 100.
      resto = valor_do_saque % 100

      notas50 =  resto / 50

      // Atualiza o restante após descontar o valor correspondente às notas de 50.
      resto = resto % 50

      notas20 = resto/ 20

      // Atualiza o restante após descontar o valor correspondente às notas de 20.
      resto = resto % 20

      notas10 = resto / 10

      // Atualiza o restante após descontar o valor correspondente às notas de 10.
      resto = resto % 10
      notas5 = resto/ 5

      escreva("Notas entregues:\n")
      se (notas100 > 0){escreva(notas100," nota(s) de 100\n")}
      
      se (notas50 > 0){escreva(notas50," nota(s) de 50\n")}
      
      se (notas20 > 0){escreva(notas20," nota(s) de 20\n")} 
      
      se (notas10 > 0){escreva(notas10," nota(s) de 10\n")}
      
      se (notas5 > 0){escreva(notas5," nota(s) de 5\n")}
      
    }
}
