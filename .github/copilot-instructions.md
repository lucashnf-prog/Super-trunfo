# Copilot Instructions for Super-trunfo

## Visão Geral
Este projeto é um jogo simples de Super Trunfo implementado em C. O código principal está em `SuperTrunfo.c`. O objetivo é manipular cartas representando estados brasileiros, cada uma com atributos como código, população, área e PIB.

## Estrutura do Projeto
- **Arquivo principal:** `SuperTrunfo.c`
- **Não há diretórios de componentes, testes ou múltiplos arquivos.**
- **Não há README.md ou instruções de agente existentes.**

## Fluxo de Dados
- O programa solicita ao usuário:
  - Uma letra (A-H) para representar o estado
  - Um número (1-4) para o código da carta
- Os dados são exibidos formatados na tela.

## Convenções Específicas
- O código utiliza variáveis simples para cada atributo da carta.
- O formato de exibição do código da carta é: `CÓDIGO: <estado>0<código>`
- Não há uso de structs, arrays ou funções customizadas além de `main`.
- O nome do arquivo e do projeto seguem o padrão "SuperTrunfo".

## Workflows de Desenvolvimento
- **Compilação:**
  - Use o comando abaixo para compilar o arquivo principal:
    ```bash
    gcc -fdiagnostics-color=always -g SuperTrunfo.c -o SuperTrunfo
    ```
  - Ou utilize a tarefa do VS Code: `C/C++: gcc arquivo de build ativo`
- **Execução:**
  - Após compilar, execute com:
    ```bash
    ./SuperTrunfo
    ```
- **Depuração:**
  - O projeto está configurado para depuração no VS Code.

## Padrões e Recomendações
- Mantenha o código simples e direto, sem abstrações desnecessárias.
- Se adicionar novos atributos ou cartas, siga o padrão de entrada e saída já existente.
- Para expandir, considere criar structs para representar cartas e funções para manipulação.

## Exemplos
```c
// Entrada de dados
printf("Insira uma letra de A até H para representar um estado: ");
scanf("%c", &estado1);

// Saída formatada
printf("CÓDIGO: %c0%d ", estado1, codigo1);
```

## Pontos de Atenção
- O array `cidade1[1]` está declarado mas não utilizado.
- O projeto não possui testes automatizados ou integração contínua.
- Não há dependências externas além da biblioteca padrão C.

---

Seções incompletas ou dúvidas sobre padrões podem ser revisadas conforme o projeto evolui. Solicite feedback do usuário para ajustes.
