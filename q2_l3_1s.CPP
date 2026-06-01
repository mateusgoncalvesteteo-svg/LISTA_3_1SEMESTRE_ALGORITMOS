inicio

declare S como string
declare i, V, C como inteiro

V <- 0
C <- 0

leia S

Para i de 1 até comprimento(S) faça

   se S[i] = 'A' ou S[i] = 'E' ou
      S[i] = 'I' ou S[i] = 'O' ou
      S[i] = 'U' ou
      S[i] = 'a' ou S[i] = 'e' ou
      S[i] = 'i' ou S[i] = 'o' ou
      S[i] = 'u' então

      V <- V + 1

   senão

      C <- C + 1

   fimse

fimpara

escreva "Número de vogais: ", V
escreva "Número de consoantes: ", C

fim