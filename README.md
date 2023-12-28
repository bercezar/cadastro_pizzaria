# cadastro_pizza.C - Lógica da programação
#Enunciado do Problema
Uma pizzaria precisa controlar suas vendas, entender seu consumidor e realizar
algumas consultas. Para isso, você foi contratado para desenvolver a primeira
versão de um software gerenciador dessa pizzaria.
Etapas

1. Fazer o cadastro de 5 pedidos
Cada pedido pode possuir uma ou mais pizzas, todas de mesmo tamanho.
Cada pedido é representado pelo valor do total da venda, quantidade de itens
vendidos, sexo do cliente e código do pedido (um número inteiro que vai de 1 a
10, representando as combinações dos combos apresentados na pizzaria). As
informações serão salvas em vetores (cada vetor deve possuir 5 posições).

  • Preencher as informações de cada pedido.<br>
  • Impedir o cadastro de valores negativos e informar este erro.<br>
  • Impedir o cadastro quando o sexo for inválido (diferente de m, f ou n) e
  informar este erro.<br>
  • Impedir o cadastro quando o código for inválido (para ser válido tem que
  ser de 1 a 10) e informar este erro.<br>
  • Informar que foi cadastrado com sucesso caso não aconteça nenhum erro
  e alocar as informações em vetores.<br>
  Após o término do cadastro dos 5 pedidos o programa irá automaticamente
  exibir o menu principal.<br>

2. Criar o menu principal
Você deve fazer um menu pedindo para o usuário escolher ver informação de
pedidos baseados no código ou ver informação de todos os pedidos
cadastrados.

3. Pesquisar um pedido<br>
  • Você deve pedir o código que deseja pesquisar.<br>
  • Informar todos os pedidos que possuam este código, ou seja, o valor do
  pedido, a quantidade de itens neste pedido e o sexo do cliente que
  comprou.<br>
  • Caso não encontre o código deve-se informar que não há pedidos com
  aquele código.<br>
  • Após exibir a informação dos pedidos ou a informação que não encontrou,
  perguntar se o usuário deseja retornar ao menu principal. Caso queira,
  apresente o menu, senão encerre o programa.<br>

4. Ver informações de todos os pedidos
Você deve:<br>
• Pedir um valor ao usuário que será usado para exibir a quantidade de
pedidos acima deste valor.<br>
• Exibir a quantidade de pedidos abaixo de 40 reais.<br>
• Exibir a quantidade de compradoras mulheres.<br>
• Exibir o valor total comprado pelos homens.<br>
• Exibir o valor médio de um pedido.<br>
• Exibir a quantidade total de itens vendidos.<br>
• Exibir a quantidade de itens comprados por pessoas que preferiram não
falar o sexo.<br>
• Exibir o código que foi mais vendido (havendo empate exibir qualquer
código dentre os mais vendidos).<br>
• Perguntar se o usuário deseja retornar ao menu principal. Caso queira,
apresente o menu, senão encerre o programa.<br>
