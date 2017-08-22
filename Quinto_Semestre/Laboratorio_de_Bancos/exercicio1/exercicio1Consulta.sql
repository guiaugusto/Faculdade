/* Consulta referente a quantidade de gols de um time em uma partida. */

USE exercicio1;

/* Consulta referente a quantidade de gols de um time em uma partida. */

SELECT nome, numeroGols, sigla 
FROM PESSOA, Delegacao, Participante 
WHERE PESSOA.codigoPessoa = Participante.codigoPessoa 
and Participante.numeroGols > 0 
and Participante.codigoDelegacao = 4 
and Delegacao.sigla = 'BRA'; 

/* Consulta referente ao países participantes de uma determinada copa. */

/*  */