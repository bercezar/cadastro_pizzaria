#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float total_da_venda[5], valor_acima = 0, valor_medio_pedido=0, valor_total_homens = 0, qnt_vendida = 0;
  int pizza = 0, opcao = 0, qntd_itens[5], cod_pedido[5], cod_pedido_ = 0, qntd_valor_acima = 0, qntd_abaixo_40 = 0, qntd_mulheres=0, qntd_itens_vendidos = 0, qntd_itens_sem_sexo = 0, codigo_mais_vendido = 0, quantidadeMaisVendido = 0;
  char sexo[5], sim_nao, sim_nao_;

  do {
    for (int i = 0; i < 5; i++) {
      qntd_itens[i] = 0;
      cod_pedido[i] = 0;
      total_da_venda[i] = 0;
      printf("\n------------------------ Cadastro de pedidos "
             "-------------------------\n\n");
      while (cod_pedido[i] < 0 && cod_pedido[i] > 10 || cod_pedido[i] == 0) {
        int resultado, codigo;
        printf("Digite o codigo de pedido: ");
        scanf(" %d", &cod_pedido[i]);
        resultado = 0;
        if (cod_pedido[i] < 0 && cod_pedido[i] > 10) {
          printf("Codigo invalido!\n");
          cod_pedido[i]--;
        }
      }

      while (sexo[i] != 'm' && sexo[i] != 'f' && sexo[i] != 'n') {
        printf("Informe o sexo do cliente [m]asculino/[f]eminino/[n]eutro: ");
        scanf(" %c", &sexo[i]);
        if (sexo[i] != 'm' && sexo[i] != 'f' && sexo[i] != 'n') {
          printf("Sexo invalido!\n");
          sexo[i]--;
        }
      }

      printf("\n-------- Digite o sabor escolhido pelo cliente. --------\n");

      do {
        printf("\t\t\nSabores:\n");
        printf("\t\t1. Pizza de Mussarela - R$ 30,00\n"
               "\t\t2. Pizza de Pepperoni - R$ 35,00\n"
               "\t\t3. Pizza de Margherita - R$ 32,00\n"
               "\t\t4. Pizza de Calabresa - R$ 28,00\n"
               "\t\t5. Pizza de Frango com Catupiry - R$ 36,00\n"
               "\t\t6. Pizza de Quatro Queijos - R$ 38,00\n"
               "\t\t7. Pizza de Bacon com Milho - R$ 34,00\n"
               "\t\t8. Pizza de Vegetariana - R$ 33,00\n"
               "\t\t9. Pizza de Portuguesa - R$ 37,00\n"
               "\t\t10. Pizza de Camarão - R$ 40,00\n\n");

        printf("\n------- Informar sabores ou [(0) para sair]: ");
        scanf("%d", &pizza);

        if (pizza < 0 && pizza > 10) {
          system("clear");
          printf("Error...\nInforme valores de 0 a 10\n\n");
          continue;
        }

        if (pizza == 1) {
          total_da_venda[i] += 30;
          qntd_itens[i]++;
        } else if (pizza == 2) {
          total_da_venda[i] += 35;
          qntd_itens[i]++;
        } else if (pizza == 3) {
          total_da_venda[i] += 32;
          qntd_itens[i]++;
        } else if (pizza == 4) {
          total_da_venda[i] += 28;
          qntd_itens[i]++;
        } else if (pizza == 5) {
          total_da_venda[i] += 36;
          qntd_itens[i]++;
        } else if (pizza == 6) {
          total_da_venda[i] += 38;
          qntd_itens[i]++;
        } else if (pizza == 7) {
          total_da_venda[i] += 34;
          qntd_itens[i]++;
        } else if (pizza == 8) {
          total_da_venda[i] += 33;
          qntd_itens[i]++;
        } else if (pizza == 9) {
          total_da_venda[i] += 37;
          qntd_itens[i]++;
        } else if (pizza == 10) {
          total_da_venda[i] += 40;
          qntd_itens[i]++;
        }

      } while (pizza != 0);
      if (i < 4) {
        printf("Pedido cadastrado com sucesso\n");
        printf("Deseja fazer outro pedido? \n[s]im / [n]ão:");
        scanf(" %c", &sim_nao);
        system("clear");
        if (sim_nao != 's') {
          system("clear");
          break;
        }
      }else
        system("clear");
    }
    do {
      printf("\n\n\t\t-----------------------------MENU "
             "-----------------------------\n\n");
      printf("\t\t1) Ver pedido baseado nos código de pedidos.\n\t\t");
      printf("2) Ver todos os pedidos.\n\t\t");
      printf("3) Encerrar o programa.\n");
      printf("\t\t----------------------------------\n");
      printf("\nInforme (n°): ");
      scanf("%d", &opcao);
      switch (opcao) {
      case 1:
        while(sim_nao == 's'){
          printf("Informe o cód. do pedido desejado: ");
          scanf("%d", &cod_pedido_);
          for (int i = 0; i < 5; i++) {
            if (cod_pedido[i] == cod_pedido_) {
              printf("\n\t\t-----------------------------PEDIDO ");
              printf("%d-----------------------------\n\n", i + 1);
              printf("O valor do pedido: R$ %.2f", total_da_venda[i]);
              printf("\n\n\t\t-----------------------------\n\n");
              printf("A quantidade de itens: %d", qntd_itens[i]);
              printf("\n\n\t\t-----------------------------\n\n");
              printf("Sexo cliente [m]asculino/[f]eminino/[n]eutro: %c\n\n",
                     sexo[i]);
            }
          }
            printf("Deseja voltar ao menu? [s]im / [n]ão: ");
            scanf(" %c", &sim_nao);
        }
        if (sim_nao == 's') {
          system("clear");
        }
      break;
      case 2:
        // • Pedir um valor ao usuário que será usado para exibir a quantidade de
        // pedidos acima deste valor.
        // • Exibir a quantidade de pedidos abaixo de 40 reais.
        // • Exibir a quantidade de compradoras mulheres.
        // • Exibir o valor total comprado pelos homens.
        // • Exibir o valor médio de um pedido.
        // • Exibir a quantidade total de itens vendidos.
        // • Exibir a quantidade de itens comprados por pessoas que preferiram não
        // falar o sexo.
        // • Exibir o código que foi mais vendido (havendo empate exibir qualquer
        // código dentre os mais vendidos).
        // • Perguntar se o usuário deseja retornar ao menu principal. Caso queira,
        // apresente o menu, senão encerre o programa.
        printf("\n\t\t-----------------------------PEDIDOS ");
        printf("-----------------------------\n\n");
        printf("Informe um valor que será usado para exibir a quantidade de pedidos acima deste valor:");
        scanf("%f", &valor_acima);
        for (int i = 0; i < 5; i++) {
          qnt_vendida += total_da_venda[i];
          qntd_itens_vendidos += qntd_itens[i];
          if (total_da_venda[i] > valor_acima) {
            qntd_valor_acima++;
          }
          if(total_da_venda[i] < 40){
            qntd_abaixo_40++;
          }
          if(sexo[i] == 'f'){
            qntd_mulheres++;
          }
          if(sexo[i] == 'm'){
            valor_total_homens += total_da_venda[i];
          }
          if(sexo[i] == 'n'){
            qntd_itens_sem_sexo += qntd_itens[i];
          }
          if (codigo_mais_vendido == -1 || qntd_itens[i] > quantidadeMaisVendido) {
              codigo_mais_vendido = cod_pedido[i];
              quantidadeMaisVendido = qntd_itens[i];
          }

          printf("\nQuantidade de pedidos abaixo de 40 reais: %d\n", qntd_abaixo_40);
          printf("\nQuantidade de compradoras mulheres: %d\n", qntd_mulheres);
          printf("\nValor total comprado pelos homens: R$%.2f\n", valor_total_homens);
          printf("\nValor médio de um pedido: R$%.2f\n", qnt_vendida / i);
          printf("\nQuantidade total de itens vendidos: %d\n", qntd_itens_vendidos);
          printf("\nQuantidade de itens comprados por pessoas que preferiram não falar o sexo: %d\n", qntd_itens_sem_sexo);
          printf("\nCódigo mais vendido: %d\n", codigo_mais_vendido);

          
          // if (cod_pedido[i] > 0 && cod_pedido[i] <= 10) {
          //   printf("-Cód. do pedido: %d\n", cod_pedido[i]);
          //   printf("\tO valor do pedido: R$ %.2f\n", total_da_venda[i]);
          //   printf("\tA quantidade de itens: %d\n", qnt_itens[i]);
          //   printf("\tSexo cliente [m]asculino/[f]eminino/[n]eutro: %c\n\n",
          //          sexo[i]);
          // }
        }
        printf("Deseja voltar ao menu? [s]im / [n]ão: ");
        scanf(" %c", &sim_nao);
        system("clear");
        break;
      case 3:
        printf("Encerrando o programa...");
        break;
      default:
        printf("Opção inválida!");
      }
    } while (sim_nao == 's');
  } while (0);
  return 0;
}
