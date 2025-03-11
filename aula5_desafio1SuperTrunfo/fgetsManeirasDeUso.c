char nome[50];
 
printf("Digite seu nome completo: ");
 
fgets(nome, 50, stdin); // Lê no máximo 49 caracteres da entrada padrão (stdin)
 

// fgets inclui o '\n' na string, então podemos removê-lo se necessário
 
nome[strcspn(nome, "\n")] = 0;
 

printf("Nome completo digitado: %s\n", nome);