/* Consulta referente a quantidade de gols de um time em uma partida. */

USE exercicio1;

/* Consulta referente a quantidade de gols de um time em uma partida. */

SELECT nome AS Nome, Participante.numeroGols AS 'Numero de Gols',
Delegacao.sigla AS Mandante, joga.sigla AS Desafiante 
FROM Pessoa, Delegacao, Participante, joga 
WHERE Pessoa.codigoPessoa = Participante.codigoPessoa 
and Participante.numeroGols > 0 
and joga.codigoJogo = 9
and Delegacao.sigla != joga.sigla
and Delegacao.sigla = 'BRA'; 

/* Consulta referente ao países participantes de uma determinada copa. */

SELECT participa.ano AS Copa, participa.sigla AS Sigla, Pais.nomePais AS 'Nome do Pais'
FROM participa, Pais 
WHERE participa.ano = 1930 and participa.sigla = Pais.sigla;

/* Alterar tupla da tabela Pessoa. */

UPDATE Participante SET numeroGols = 1
WHERE Participante.codigoPessoa = 5;

/* Apagando um registro. */

INSERT INTO Cidade (codigoCidade, ddd, nomeCidade, sigla) VALUES (6,'061','Brasilia','BRA');
DELETE FROM Cidade WHERE codigoCidade = 6;
